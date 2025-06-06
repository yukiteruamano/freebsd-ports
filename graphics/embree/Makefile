PORTNAME=	embree
PORTVERSION=	4.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	graphics

PATCH_SITES=	https://github.com/RenderKit/${PORTNAME}/commit/
PATCHFILES+=	cda4cf1919bb2a748e78915fbd6e421a1056638d.patch:-p1 # https://github.com/RenderKit/embree/issues/486

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Collection of high-performance ray tracing kernels
WWW=		https://www.embree.org/

LICENSE=	APACHE20

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	heavy use of SSE instructions

USES=		cmake pkgconfig
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	RenderKit

CMAKE_ARGS=	-DEMBREE_TASKING_SYSTEM:STRING=${_ETS} \
		-DCMAKE_INSTALL_DOCDIR:STRING=${DOCSDIR} \
		-DEMBREE_RAY_MASK:BOOL=ON \
		-DEMBREE_ZIP_MODE:BOOL=OFF

PLIST_SUB+=	VERSION=${PORTVERSION} MANSUFX=4${PORTNAME}4.gz

OPTIONS_DEFINE=	BACKFACE_CULLING DOCS EXAMPLES ISPC TBB
OPTIONS_DEFAULT=	ISPC TBB
OPTIONS_SUB=	yes

BACKFACE_CULLING_DESC=	Enable back-face culling (BFC)
BACKFACE_CULLING_CMAKE_ON=	-DEMBREE_BACKFACE_CULLING:BOOL=ON

ISPC_DESC=		ISPC applications support
ISPC_BUILD_DEPENDS=	ispc:devel/ispc
ISPC_CMAKE_ON=		-DEMBREE_ISPC_SUPPORT:BOOL=ON

EXAMPLES_LIB_DEPENDS=	libglfw.so:graphics/glfw \
			libpng.so:graphics/png
EXAMPLES_USES=		gl jpeg xorg
EXAMPLES_USE=		GL=gl,glu,glut XORG=x11,xau,xcb,xdmcp
EXAMPLES_CMAKE_OFF=	-DEMBREE_TUTORIALS:BOOL=OFF

TBB_DESC=		Use Intel TBB (optimal performance)
TBB_LIB_DEPENDS=	libtbb.so:devel/onetbb
TBB_VARS=		_ETS=TBB
TBB_VARS_OFF=		_ETS=INTERNAL

.include <bsd.port.pre.mk>

# Disable parts that use _mm_cvtsi128_si64() which is not defined on i386
.if ${ARCH} == i386
CMAKE_ARGS+=	-DEMBREE_ISA_AVX512:BOOL=OFF
.endif

post-patch:
	@${REINPLACE_CMD} -e \
	    '/SET(CMAKE_INSTALL_BINDIR/s,\$$.*),${EXAMPLESDIR}"),' \
		${WRKSRC}/common/cmake/package.cmake
	@${REINPLACE_CMD} -e 's,Win32,${OPSYS},gi' \
		${WRKSRC}/common/simd/vint4_sse2.h
# Obsolete GNU binutils 2.17.50 objdump(1) is going to be removed
# from the base, use LLVM's one if it's available
.if exists(/usr/bin/llvm-objdump)
	@${REINPLACE_CMD} -e 's,objdump,llvm-&,' \
		${WRKSRC}/common/cmake/check_globals.cmake \
		${WRKSRC}/common/cmake/check_stack_frame_size.cmake
.endif
	@${REINPLACE_CMD} -e \
	    '/DESTINATION "src" COMPONENT examples)/s,^INSTALL,#&,' \
		${WRKSRC}/tutorials/minimal/CMakeLists.txt \
		${WRKSRC}/tutorials/CMakeLists.txt

do-test:
	${TEST_WRKSRC}/${PORTNAME}_verify

.include <bsd.port.post.mk>
