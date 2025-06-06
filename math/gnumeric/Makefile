PORTNAME=	gnumeric
PORTVERSION=	1.12.52
PORTREVISION=	4
CATEGORIES=	math gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME spreadsheet program
WWW=		http://www.gnumeric.org

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool \
		ginstall:sysutils/coreutils
LIB_DEPENDS=	libgoffice-0.10.so:devel/goffice \
		libfribidi.so:converters/fribidi \
		libpsiconv.so:converters/psiconv

USES=		cpe desktop-file-utils gettext gmake gnome libtool \
		localbase pathfix pkgconfig python shebangfix tar:xz
USE_GNOME=	cairo intlhack gtk30 libgsf pygobject3
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	\
		--without-paradox \
		--without-python \
		--enable-introspection
INSTALL_TARGET=	install-strip

CPE_VENDOR=	gnome

GLIB_SCHEMAS=	org.gnome.gnumeric.dialogs.gschema.xml \
		org.gnome.gnumeric.gschema.xml \
		org.gnome.gnumeric.plugin.gschema.xml

SHEBANG_FILES=	plugins/perl-func/perl_func.pl

BINARY_ALIAS=	python=${PYTHON_CMD} \
		install=ginstall

PLIST_SUB=	VERSION=${PORTVERSION} \
		GOFFICE=0.10 \
		SHORT_VER=${PORTVERSION:R}

OPTIONS_SUB=	yes
OPTIONS_DEFINE=	PERL GDA
OPTIONS_DEFAULT=PERL
GDA_DESC=	Gnome Database Access plugin
PERL_DESC=	Support Perl as extension language

PERL_USES=	perl5
PERL_CONFIGURE_WITH=	perl

GDA_CONFIGURE_WITH=	gda
GDA_USE=	GNOME=libgda5-ui

post-patch:
	@${REINPLACE_CMD} -e 's|^GETTEXT_PACKAGE=gnumeric-$${VERSION}|GETTEXT_PACKAGE=gnumeric|g' \
		${WRKSRC}/configure

post-install:
	${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py -d \
		${PREFIX}/${dir}/gnumeric -f ${STAGEDIR}${PREFIX}/lib/gnumeric/${PORTVERSION}
	${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py -d \
		${PREFIX}/${dir}/gnumeric -f ${STAGEDIR}${PREFIX}/lib/gnumeric/${PORTVERSION}

.include <bsd.port.mk>
