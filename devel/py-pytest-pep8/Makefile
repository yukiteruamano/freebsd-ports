PORTNAME=	pytest-pep8
PORTVERSION=	1.0.6
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	meka@tilda.center
COMMENT=	Pytest plugin to check PEP8 requirements
WWW=		https://bitbucket.org/pytest-dev/pytest-pep8

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Depends on expiring devel/py-pytest4
EXPIRATION_DATE=2025-06-21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest4>=2.4.2:devel/py-pytest4@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest4-cache>=0:devel/py-pytest4-cache@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pep8>=1.3:devel/pep8@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

TEST_ENV=	PYTHONPATH=${WRKSRC}/src

NO_ARCH=	yes

do-test:
	cd ${WRKSRC} && ${SETENV} ${TEST_ENV} ${PYTHON_CMD} -m pytest -v -rs -o addopts= \
		-k 'not test_strict \
		and not test_ok_verbose \
		and not test_mtime_caching \
		and not test_w293w292'

.include <bsd.port.mk>
