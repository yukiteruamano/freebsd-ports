PORTNAME=	libsass
DISTVERSION=	0.23.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Straightforward binding of libsass for Python
WWW=		https://pypi.org/project/libsass/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libsass.so:textproc/libsass

USES=		compiler:c++11-lang localbase python
USE_PYTHON=	distutils autoplist pytest

MAKE_ENV=	SYSTEM_SASS=1

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/_sass.abi3.so

.include <bsd.port.mk>
