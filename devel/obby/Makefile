PORTNAME=	obby
PORTVERSION=	0.4.8
PORTREVISION=	6
CATEGORIES=	devel
MASTER_SITES=	http://releases.0x539.de/obby/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for synced document buffers
WWW=		http://gobby.0x539.de

LICENSE=	GPLv2

DEPRECATED=	Abandoned upstream, repo archived Nov 26, 2020
EXPIRATION_DATE=2025-06-30

LIB_DEPENDS=	libsigc-2.0.so:devel/libsigc++20 \
		libnet6.so:net/net6

BROKEN_armv6=		fails to compile: no member named 'name' in 'serialise::type_name<long long>'
BROKEN_armv7=		fails to compile: no member named 'name' in 'serialise::type_name<long long>'

USES=		pathfix pkgconfig libtool compiler:c++11-lang
USE_CXXSTD=	c++11
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USES+=		gettext
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

.include <bsd.port.mk>
