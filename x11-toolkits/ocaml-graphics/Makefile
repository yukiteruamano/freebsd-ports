PORTNAME=	graphics
PORTVERSION=	5.1.2
PORTREVISION=	2
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	freebsd@dev.thsi.be
COMMENT=	Graphics library for OCaml
WWW=		https://github.com/ocaml/graphics

LICENSE=	LGPL21

USES=		ocaml:dune,ldconfig pkgconfig xorg
USE_GITHUB=	yes
GH_ACCOUNT=	ocaml
GH_PROJECT=	graphics
USE_XORG=	x11 xorgproto

DOCSDIR=	${OCAML_DOCSDIR}/${PORTNAME}
PORTDOCS=	CHANGES.md LICENSE README.md

OPTIONS_DEFINE=		DOCS

SA_DIR=		${LOCALBASE}/${OCAML_SITELIBDIR}

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_BINUTILS=	yes
.endif

post-patch:
	@${REINPLACE_CMD} \
		-e "s/(name graphics)/&\n (version ${PORTVERSION})/" \
		-e "s/(lang dune 2.1)/(lang dune 2.5)/" \
		${WRKSRC}/dune-project

post-install:
	@${STRIP_CMD} \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/dllgraphics_stubs.so \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/graphics.cmxs

.include <bsd.port.mk>
