PORTNAME=	commons-pool
DISTVERSION=	2.12.1
CATEGORIES=	java devel
MASTER_SITES=	APACHE_COMMONS_BINARIES
PKGNAMEPREFIX=	apache-
DISTNAME=	${PORTNAME}2-${DISTVERSION}-bin

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Apache Commons Object-pooling API
WWW=		https://commons.apache.org/proper/commons-pool/

LICENSE=	APACHE20

USES=		java

OPTIONS_DEFINE=	DOCS

NO_BUILD=	yes
NO_ARCH=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}2-${DISTVERSION}

JARFILE=	${PORTNAME}2-${DISTVERSION}.jar
DOCFILES=	LICENSE.txt \
		NOTICE.txt \
		RELEASE-NOTES.txt

PORTDOCS=	*
PLIST_FILES=	${JAVAJARDIR}/${PORTNAME}.jar \
		${JAVAJARDIR}/${JARFILE}

.include <bsd.port.options.mk>

do-install:
	${INSTALL_DATA} ${WRKSRC}/${JARFILE} ${STAGEDIR}${JAVAJARDIR}
	${LN} -sf ${JARFILE} ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar
.if ${PORT_OPTIONS:MDOCS}
	cd ${WRKSRC} && ${COPYTREE_SHARE} apidocs ${STAGEDIR}${DOCSDIR}
.for FILE in ${DOCFILES}
	${INSTALL_MAN} ${WRKSRC}/${FILE} ${STAGEDIR}${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
