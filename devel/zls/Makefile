PORTNAME=	zls
DISTVERSION=	0.13.0
CATEGORIES=	devel
MASTER_SITES=	https://raw.githubusercontent.com/ziglang/:langref
DISTFILES=	zig/${DISTVERSION}/doc/langref.html.in:langref
EXTRACT_ONLY=	${DISTFILES:N*\:langref:C/\:.*//}

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Zig LSP implementation + Zig Language Server
WWW=		https://github.com/zigtools/zls

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	zig>=0.13.0:lang/zig
RUN_DEPENDS=	zig:lang/zig

USE_GITHUB=	yes
GH_ACCOUNT=	zigtools
GH_TUPLE=	wolfpld:tracy:v0.10:tracy/src/tracy \
		ziglibs:diffz:ef45c00:diffz/../.cache/zig/p/1220102cb2c669d82184fb1dc5380193d37d68b54e8d75b76b2d155b9af7d7e2e76d \
		ziglibs:known-folders:0.7.0-35-g0ad514d:known_folders/../.cache/zig/p/12209cde192558f8b3dc098ac2330fc2a14fdd211c5433afd33085af75caa9183147
MAKE_ENV=	DESTDIR="${STAGEDIR}"
CONFIGURE_ARGS=	--prefix "${PREFIX}" \
		${WITH_DEBUG:D:U-Doptimize=ReleaseFast} \
		-Dcpu=${CPUTYPE:Ubaseline} \
		-Ddata_version=${DISTVERSION} \
		-Dversion_data_path=${DISTFILES:M*\:langref:C/\:.*//:S,^,${_DISTDIR},} \
		--verbose
NO_INSTALL=	yes # strip(1) breaks runtime
PLIST_FILES=	bin/${PORTNAME}

post-patch:
# Respect PREFIX for global_configuration
	@${REINPLACE_CMD} -e 's,/etc,${PREFIX}&,' \
		${WRKSRC_known_folders}/known-folders.zig

do-build:
	@(cd ${WRKSRC} && ${MAKE_ENV} zig build ${CONFIGURE_ARGS})

do-test:
	@(cd ${WRKSRC} && ${TEST_ENV} zig build test ${CONFIGURE_ARGS})

.include <bsd.port.mk>
