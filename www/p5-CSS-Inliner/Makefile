PORTNAME=	CSS-Inliner
PORTVERSION=	4027
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	einar@isnic.is
COMMENT=	Library for converting CSS blocks and files to inline styles
WWW=		https://metacpan.org/release/CSS-Inliner

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Query>=0.09:www/p5-HTML-Query \
		p5-HTML-Tree>=5.03:www/p5-HTML-Tree \
		p5-libwww>=0:www/p5-libwww \
		p5-URI>=0:net/p5-URI
TEST_DEPENDS=	p5-Test-Pod>=1:devel/p5-Test-Pod

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
