PORTNAME=	joblib
PORTVERSION=	1.5.1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Lightweight pipelining using Python functions as jobs
WWW=		https://joblib.readthedocs.io/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PY_SETUPTOOLS} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
TEST_DEPENDS=	${PYNUMPY}
#TEST_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}threadpoolctl>0:devel/py-threadpoolctl@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist pep517 pytest

NO_ARCH=	yes

PYTEST_IGNORED_TESTS=	test_disk_used	\
			test_parallel_call_cached_function_defined_in_jupyter
PYTEST_BROKEN_TESTS=	test_memmapping_on_large_enough_dev_shm

.include <bsd.port.mk>
