PORTNAME=	dspdfviewer
PORTVERSION=	1.15.1
DISTVERSIONPREFIX=	v
PORTREVISION=	74
CATEGORIES=	graphics

MAINTAINER=	fox@FreeBSD.org
COMMENT=	Dual-screen PDF viewer for LaTeX-beamer
WWW=		https://github.com/dannyedel/dspdfviewer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libboost_program_options.so:devel/boost-libs \
		libpoppler-qt5.so:graphics/poppler-qt5

USES=		cmake:insource compiler:c++14-lang pkgconfig qt:5
USE_QT=		core gui linguisttools widgets xml buildtools:build qmake:build
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	dannyedel

BUILD_WRKSRC=		${WRKSRC}/build
CONFIGURE_WRKSRC=	${WRKSRC}/build
INSTALL_WRKSRC=		${WRKSRC}/build

CMAKE_ARGS=	-DBuildTests=OFF \
		-DPOPPLER_LIBRARIES=${LOCALBASE}/lib/libpoppler-qt5.so

PLIST_FILES=	bin/dspdfviewer \
		share/applications/dspdfviewer.desktop \
		share/man/man1/dspdfviewer.1.gz

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == clang
# Build fails with LLVM 4.0.  Reported upstream as #191:
# https://github.com/dannyedel/dspdfviewer/issues/191
CFLAGS+=	-Wno-error=undefined-func-template
.endif

.if ${OPSYS} == FreeBSD && ${CHOSEN_COMPILER_TYPE} == clang
# (rene) also related to issue #191 which is still open as of 2020-10-21
CFLAGS+=	-Wno-error=zero-as-null-pointer-constant
# Fixes build failure for Clang 8.0.0
CFLAGS+=	-Wno-error=extra-semi-stmt
# Fixes build failure for Clang 11.0.0
CFLAGS+=	-Wno-error=suggest-destructor-override
CFLAGS+=	-Wno-error=suggest-override
# Fixes build failure for Clang 14.0.3
.if ${OSVERSION} >= 1400059
CFLAGS+=       -Wno-error=bitwise-instead-of-logical
.endif
# Fixes build failure for Clang 16.0.6
CFLAGS+=       -Wno-error=unsafe-buffer-usage
# Fixes build failure for Clang 18.1.4
CFLAGS+=       -Wno-error=switch-default
.endif

# Prepare for Qt5-5.15
CFLAGS+=	-Wno-deprecated

.if ${CHOSEN_COMPILER_TYPE} == clang
CFLAGS+=	-Wno-error=redundant-parens
.else
CFLAGS+=	-Wno-error=deprecated-declarations
.endif

.include <bsd.port.post.mk>
