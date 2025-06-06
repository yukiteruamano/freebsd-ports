PORTNAME=	binutils
PORTVERSION=	2.44
CATEGORIES=	devel
MASTER_SITES=	SOURCEWARE/binutils/releases
PKGNAMEPREFIX=	arm-elf-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU binutils for vanilla ARM cross-development
WWW=		https://www.gnu.org/software/binutils

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	multi

USES=		cpe gettext gmake localbase tar:xz
CPE_VENDOR=	gnu

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	--target=${PKGNAMEPREFIX:S/-$//} --disable-werror \
		--disable-nls

BINARY_ALIAS=	makeinfo=true

INFO_PATH=	${PKGNAMEPREFIX:S/-$//}/info

post-install:
.for F in addr2line c++filt elfedit gprof objcopy objdump readelf size strings
	${LN} -f ${STAGEDIR}${PREFIX}/bin/${PKGNAMEPREFIX}$F  \
		${STAGEDIR}${PREFIX}/${PKGNAMEPREFIX:S/-$//}/bin/$F
.endfor
	cd ${WRKSRC}/libiberty ; ${CP} libiberty.a \
		${STAGEDIR}${PREFIX}/${PKGNAMEPREFIX:S/-$//}/lib
	${RM} ${STAGEDIR}${PREFIX}/${PKGNAMEPREFIX:S/-$//}/info/*
	${RMDIR} ${STAGEDIR}${PREFIX}/${PKGNAMEPREFIX:S/-$//}/info

.include <bsd.port.mk>
