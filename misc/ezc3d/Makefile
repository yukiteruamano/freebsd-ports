PORTNAME=	ezc3d
DISTVERSIONPREFIX=	Release_
DISTVERSION=	1.5.19
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C3D (biomechanics data format) reader/writer for C++
WWW=		https://github.com/pyomeca/ezc3d

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:testing compiler:c++11-lang python:test

USE_GITHUB=	yes
GH_ACCOUNT=	pyomeca
GH_TUPLE=	google:googletest:3880b13:googletest/external/gtest # https://github.com/pyomeca/ezc3d/issues/256

CMAKE_TESTING_ON=	BUILD_TESTS

CMAKE_TESTING_TARGET=	gtest

post-test:
	@cd ${TEST_WRKSRC}/test && ./ezc3d_test

# tests as of 1.5.19: [  PASSED  ] 54 tests.

.include <bsd.port.mk>
