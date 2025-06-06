PORTNAME=	yubikey-manager
PORTVERSION=	5.2.0
CATEGORIES=	security python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	yubikey_manager-${PORTVERSION}

MAINTAINER=	egypcio@FreeBSD.org
COMMENT=	Python library and command line tool for configuring a YubiKey
WWW=		https://developers.yubico.com/yubikey-manager/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${RUN_DEPENDS} \
		${PYTHON_PKGNAMEPREFIX}poetry-core>=1.0.0:devel/py-poetry-core@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fido2>0:security/py-fido2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}keyring>=0:security/py-keyring@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>0:security/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyscard>0:security/py-pyscard@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyusb>0:devel/py-pyusb@${PY_FLAVOR} \
		RSA_SecurID_getpasswd:devel/libccid \
		pcsc-spy:devel/pcsc-lite \
		ykpersonalize:security/ykpers
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}makefun>0:devel/py-makefun@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${PY_FLAVOR}

USES=		dos2unix python
USE_PYTHON=	autoplist concurrent cryptography cryptography_build pep517 unittest

DOS2UNIX_GLOB=	*.adoc *.py

NO_ARCH=	yes

.include <bsd.port.mk>
