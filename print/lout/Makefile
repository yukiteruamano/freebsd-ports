PORTNAME=	lout
PORTVERSION=	3.43.2
CATEGORIES=	print

MAINTAINER=	kbowling@FreeBSD.org
COMMENT=	LaTeX like document creation system with PostScript/PDF output
WWW=		https://github.com/william8000/lout

LICENSE=	GPLv3+

USES=		cpe ghostscript:run gmake magick:run
CPE_VENDOR=	lout_project

USE_GITHUB=	yes
GH_ACCOUNT=	william8000

MAKEFILE=	makefile
ALL_TARGET=	lout prg2lout
INSTALL_TARGET=	install installman installdoc

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
