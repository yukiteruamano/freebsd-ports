PORTNAME=	prawn-icon
PORTVERSION=	3.1.0
CATEGORIES=	print rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	3

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Provide various icon fonts for the Prawn PDF toolkit
WWW=		https://github.com/jessedoyle/prawn-icon

LICENSE=	GPLv2 GPLv3 RUBY
LICENSE_COMB=	dual
LICENSE_FILE_GPLv2=	${WRKSRC}/GPLv2
LICENSE_FILE_GPLv3=	${WRKSRC}/GPLv3
LICENSE_FILE_RUBY=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-prawn>=1.1.0<3.0.0:print/rubygem-prawn

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^3\.

.include <bsd.port.mk>
