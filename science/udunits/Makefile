PORTNAME=	udunits
PORTVERSION=	2.2.28
CATEGORIES=	science math
MASTER_SITES=	ftp://ftp.unidata.ucar.edu/pub/udunits/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Library for manipulating units of physical quantities
WWW=		https://www.unidata.ucar.edu/software/udunits/ \
		https://github.com/Unidata/UDUNITS-2

LICENSE=	UCAR_UNIDATA
LICENSE_FILE=	${WRKSRC}/COPYRIGHT
LICENSE_NAME=	University Corporation for Atmospheric Research/Unidata
LICENSE_PERMS=	auto-accept dist-mirror dist-sell pkg-mirror pkg-sell

LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		libtool localbase

CFLAGS+=	-D__BSD_VISIBLE
CONFIGURE_ENV=	ac_cv_header_CUnit_CUnit_h=no
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check
USE_LDCONFIG=	yes

INFO=		udunits2 udunits2lib udunits2prog

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e '/install-data-hook$$/d' ${WRKSRC}/lib/Makefile.in

post-patch-DOCS-on:
	@${REINPLACE_CMD} -e '/^dist_doc_DATA = / s| COPYRIGHT||' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
