PORTNAME=	Osi
DISTVERSIONPREFIX=	releases/
DISTVERSION=	0.108.11
PORTREVISION=	1
CATEGORIES=	math
PKGNAMEPREFIX=	coin-or-

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	COIN-OR Open Solver Interface, an API for calling solver libraries
WWW=		https://github.com/coin-or/Osi/

LICENSE=	EPL
LICENSE_FILE=	${WRKSRC}/Osi/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libCoinUtils.so:math/coinutils \
		libopenblas.so:math/openblas
RUN_DEPENDS=	coin-or-Data-Sample>0:math/coin-or-data-sample \
		coin-or-Data-Netlib>0:math/coin-or-data-netlib

USES=		fortran gmake libtool localbase:ldflags pkgconfig tar:tgz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-blas-lib="-lopenblas" --with-lapack-lib="-lopenblas" \
		--with-sample-datadir="${LOCALBASE}/share/coin/Data/Sample" \
		--with-netlib-datadir="${LOCALBASE}/share/coin/Data/Netlib" \
		--with-coinutils-incdir="${LOCALBASE}/include/coin" --with-coinutils-lib="${LOCALBASE}/lib/libCoinUtils.so"
		# Incompatible with optional dependencies glpk and SoPlex: https://projects.coin-or.org/Osi/ticket/117 https://projects.coin-or.org/Osi/ticket/118
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	coin-or

INSTALL_TARGET=	install-strip
TEST_TARGET=	test # tests fail to compile, see https://github.com/coin-or/Osi/issues/190

post-install:
	@${RM} -r ${STAGEDIR}${PREFIX}/share/coin

.include <bsd.port.mk>
