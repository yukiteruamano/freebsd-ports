PORTNAME=	oha
DISTVERSIONPREFIX=	v
DISTVERSION=	1.7.0
PORTREVISION=	3
CATEGORIES=	net

MAINTAINER=	otis@FreeBSD.org
COMMENT=	Web load generator
WWW=		https://github.com/hatoo/oha

LICENSE=	MIT

USES=		cargo gmake llvm ssl
USE_GITHUB=	yes
GH_ACCOUNT=	hatoo

CARGO_CRATES=	actix-codec-0.5.2 \
		actix-http-3.9.0 \
		actix-macros-0.2.4 \
		actix-router-0.5.3 \
		actix-rt-2.10.0 \
		actix-server-2.5.0 \
		actix-service-2.0.2 \
		actix-utils-3.0.1 \
		actix-web-4.9.0 \
		actix-web-codegen-4.3.0 \
		addr2line-0.24.2 \
		adler2-2.0.0 \
		ahash-0.7.8 \
		ahash-0.8.11 \
		aho-corasick-1.1.3 \
		alloc-no-stdlib-2.0.4 \
		alloc-stdlib-0.2.2 \
		allocator-api2-0.2.21 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		anstream-0.6.18 \
		anstyle-1.0.10 \
		anstyle-parse-0.2.6 \
		anstyle-query-1.1.2 \
		anstyle-wincon-3.0.7 \
		anyhow-1.0.95 \
		arrayvec-0.7.6 \
		assert_cmd-2.0.16 \
		async-trait-0.1.86 \
		atomic-waker-1.1.2 \
		autocfg-1.4.0 \
		average-0.15.1 \
		aws-lc-rs-1.12.2 \
		aws-lc-sys-0.25.0 \
		aws-sign-v4-0.3.0 \
		axum-0.8.1 \
		axum-core-0.5.0 \
		backtrace-0.3.74 \
		base64-0.22.1 \
		bindgen-0.69.5 \
		bit-set-0.8.0 \
		bit-vec-0.8.0 \
		bitflags-2.8.0 \
		bitvec-1.0.1 \
		block-buffer-0.10.4 \
		borrow-or-share-0.2.2 \
		borsh-1.5.5 \
		borsh-derive-1.5.5 \
		brotli-6.0.0 \
		brotli-decompressor-4.0.2 \
		bstr-1.11.3 \
		bumpalo-3.17.0 \
		byte-unit-5.1.6 \
		bytecheck-0.6.12 \
		bytecheck_derive-0.6.12 \
		bytecount-0.6.8 \
		byteorder-1.5.0 \
		bytes-1.9.0 \
		bytestring-1.4.0 \
		cassowary-0.3.0 \
		castaway-0.2.3 \
		cc-1.2.11 \
		cexpr-0.6.0 \
		cfg-if-1.0.0 \
		cfg_aliases-0.2.1 \
		chrono-0.4.39 \
		clang-sys-1.8.1 \
		clap-4.5.27 \
		clap_builder-4.5.27 \
		clap_derive-4.5.24 \
		clap_lex-0.7.4 \
		cmake-0.1.53 \
		colorchoice-1.0.3 \
		compact_str-0.8.1 \
		convert_case-0.4.0 \
		cookie-0.16.2 \
		core-foundation-0.9.4 \
		core-foundation-0.10.0 \
		core-foundation-sys-0.8.7 \
		cpufeatures-0.2.17 \
		crc32fast-1.4.2 \
		crossbeam-channel-0.5.14 \
		crossbeam-epoch-0.9.18 \
		crossbeam-utils-0.8.21 \
		crossterm-0.28.1 \
		crossterm_winapi-0.9.1 \
		crypto-common-0.1.6 \
		darling-0.20.10 \
		darling_core-0.20.10 \
		darling_macro-0.20.10 \
		data-encoding-2.7.0 \
		deranged-0.3.11 \
		derive_more-0.99.18 \
		difflib-0.4.0 \
		digest-0.10.7 \
		displaydoc-0.2.5 \
		doc-comment-0.3.3 \
		dunce-1.0.5 \
		easy-cast-0.5.3 \
		either-1.13.0 \
		email_address-0.2.9 \
		encoding_rs-0.8.35 \
		enum-as-inner-0.6.1 \
		equivalent-1.0.1 \
		errno-0.3.10 \
		fallible-iterator-0.3.0 \
		fallible-streaming-iterator-0.1.9 \
		fancy-regex-0.14.0 \
		fastrand-2.3.0 \
		flate2-1.0.35 \
		float-cmp-0.10.0 \
		float-ord-0.3.2 \
		fluent-uri-0.3.2 \
		flume-0.11.1 \
		fnv-1.0.7 \
		foldhash-0.1.4 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		fraction-0.15.3 \
		fs_extra-1.3.0 \
		funty-2.0.0 \
		futures-0.3.31 \
		futures-channel-0.3.31 \
		futures-core-0.3.31 \
		futures-executor-0.3.31 \
		futures-io-0.3.31 \
		futures-macro-0.3.31 \
		futures-sink-0.3.31 \
		futures-task-0.3.31 \
		futures-util-0.3.31 \
		generator-0.8.4 \
		generic-array-0.14.7 \
		getrandom-0.2.15 \
		getrandom-0.3.1 \
		gimli-0.31.1 \
		glob-0.3.2 \
		h2-0.3.26 \
		h2-0.4.7 \
		hashbrown-0.12.3 \
		hashbrown-0.15.2 \
		hashlink-0.10.0 \
		heck-0.5.0 \
		hermit-abi-0.3.9 \
		hex-0.4.3 \
		hickory-proto-0.24.2 \
		hickory-resolver-0.24.2 \
		home-0.5.11 \
		hostname-0.3.1 \
		http-0.2.12 \
		http-1.2.0 \
		http-body-1.0.1 \
		http-body-util-0.1.2 \
		http-mitm-proxy-0.12.0 \
		httparse-1.10.0 \
		httpdate-1.0.3 \
		humantime-2.1.0 \
		hyper-1.6.0 \
		hyper-util-0.1.10 \
		iana-time-zone-0.1.61 \
		iana-time-zone-haiku-0.1.2 \
		icu_collections-1.5.0 \
		icu_locid-1.5.0 \
		icu_locid_transform-1.5.0 \
		icu_locid_transform_data-1.5.0 \
		icu_normalizer-1.5.0 \
		icu_normalizer_data-1.5.0 \
		icu_properties-1.5.1 \
		icu_properties_data-1.5.0 \
		icu_provider-1.5.0 \
		icu_provider_macros-1.5.0 \
		ident_case-1.0.1 \
		idna-1.0.3 \
		idna_adapter-1.2.0 \
		impl-more-0.1.9 \
		indexmap-2.7.1 \
		indoc-2.0.5 \
		instability-0.3.7 \
		ipconfig-0.3.2 \
		ipnet-2.11.0 \
		is_terminal_polyfill-1.70.1 \
		itertools-0.12.1 \
		itertools-0.13.0 \
		itoa-1.0.14 \
		jobserver-0.1.32 \
		js-sys-0.3.77 \
		jsonschema-0.28.3 \
		language-tags-0.3.2 \
		lazy_static-1.5.0 \
		lazycell-1.3.0 \
		libc-0.2.169 \
		libloading-0.8.6 \
		libm-0.2.11 \
		libsqlite3-sys-0.31.0 \
		linked-hash-map-0.5.6 \
		linux-raw-sys-0.4.15 \
		litemap-0.7.4 \
		local-channel-0.1.5 \
		local-waker-0.1.4 \
		lock_api-0.4.12 \
		log-0.4.25 \
		loom-0.7.2 \
		lru-0.12.5 \
		lru-cache-0.1.2 \
		match_cfg-0.1.0 \
		matchers-0.1.0 \
		matchit-0.8.4 \
		memchr-2.7.4 \
		memoffset-0.9.1 \
		mime-0.3.17 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.8.3 \
		mio-1.0.3 \
		moka-0.12.10 \
		nanorand-0.7.0 \
		native-tls-0.2.13 \
		nix-0.27.1 \
		nom-7.1.3 \
		normalize-line-endings-0.3.0 \
		nu-ansi-term-0.46.0 \
		num-0.4.3 \
		num-bigint-0.4.6 \
		num-cmp-0.1.0 \
		num-complex-0.4.6 \
		num-conv-0.1.0 \
		num-integer-0.1.46 \
		num-iter-0.1.45 \
		num-rational-0.4.2 \
		num-traits-0.2.19 \
		num_cpus-1.16.0 \
		object-0.36.7 \
		once_cell-1.20.2 \
		openssl-0.10.69 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.6 \
		openssl-sys-0.9.104 \
		outref-0.5.2 \
		overload-0.1.1 \
		parking_lot-0.12.3 \
		parking_lot_core-0.9.10 \
		paste-1.0.15 \
		pem-3.0.4 \
		percent-encoding-2.3.1 \
		pin-project-lite-0.2.16 \
		pin-utils-0.1.0 \
		pkg-config-0.3.31 \
		portable-atomic-1.10.0 \
		powerfmt-0.2.0 \
		ppv-lite86-0.2.20 \
		predicates-3.1.3 \
		predicates-core-1.0.9 \
		predicates-tree-1.0.12 \
		prettyplease-0.2.29 \
		proc-macro-crate-3.2.0 \
		proc-macro2-1.0.93 \
		ptr_meta-0.1.4 \
		ptr_meta_derive-0.1.4 \
		quick-error-1.2.3 \
		quote-1.0.38 \
		radium-0.7.0 \
		rand-0.8.5 \
		rand-0.9.0 \
		rand_chacha-0.3.1 \
		rand_chacha-0.9.0 \
		rand_core-0.6.4 \
		rand_core-0.9.0 \
		rand_regex-0.18.0 \
		ratatui-0.29.0 \
		rcgen-0.13.2 \
		redox_syscall-0.5.8 \
		ref-cast-1.0.23 \
		ref-cast-impl-1.0.23 \
		referencing-0.28.3 \
		regex-1.11.1 \
		regex-automata-0.1.10 \
		regex-automata-0.4.9 \
		regex-lite-0.1.6 \
		regex-syntax-0.6.29 \
		regex-syntax-0.8.5 \
		rend-0.4.2 \
		reqwest-0.12.12 \
		resolv-conf-0.7.0 \
		ring-0.17.8 \
		rkyv-0.7.45 \
		rkyv_derive-0.7.45 \
		rlimit-0.10.2 \
		rusqlite-0.33.0 \
		rust_decimal-1.36.0 \
		rustc-demangle-0.1.24 \
		rustc-hash-1.1.0 \
		rustc_version-0.4.1 \
		rustix-0.38.44 \
		rustls-0.23.22 \
		rustls-native-certs-0.8.1 \
		rustls-pki-types-1.11.0 \
		rustls-webpki-0.102.8 \
		rustversion-1.0.19 \
		ryu-1.0.19 \
		schannel-0.1.27 \
		scoped-tls-1.0.1 \
		scopeguard-1.2.0 \
		seahash-4.1.0 \
		security-framework-2.11.1 \
		security-framework-3.2.0 \
		security-framework-sys-2.14.0 \
		semver-1.0.25 \
		serde-1.0.217 \
		serde_derive-1.0.217 \
		serde_json-1.0.138 \
		serde_path_to_error-0.1.16 \
		serde_urlencoded-0.7.1 \
		sha1-0.10.6 \
		sha2-0.10.8 \
		sha256-1.5.0 \
		sharded-slab-0.1.7 \
		shlex-1.3.0 \
		signal-hook-0.3.17 \
		signal-hook-mio-0.2.4 \
		signal-hook-registry-1.4.2 \
		simdutf8-0.1.5 \
		slab-0.4.9 \
		smallvec-1.13.2 \
		socket2-0.5.8 \
		spin-0.9.8 \
		stable_deref_trait-1.2.0 \
		static_assertions-1.1.0 \
		strsim-0.11.1 \
		strum-0.26.3 \
		strum_macros-0.26.4 \
		subtle-2.6.1 \
		syn-1.0.109 \
		syn-2.0.96 \
		sync_wrapper-1.0.2 \
		synstructure-0.13.1 \
		tagptr-0.2.0 \
		tap-1.0.1 \
		tempfile-3.16.0 \
		termtree-0.5.1 \
		thiserror-1.0.69 \
		thiserror-2.0.11 \
		thiserror-impl-1.0.69 \
		thiserror-impl-2.0.11 \
		thread_local-1.1.8 \
		tikv-jemalloc-sys-0.6.0+5.3.0-1-ge13ca993e8ccb9ba9847cc330696e02839f328f7 \
		tikv-jemallocator-0.6.0 \
		time-0.3.37 \
		time-core-0.1.2 \
		time-macros-0.2.19 \
		tinystr-0.7.6 \
		tinyvec-1.8.1 \
		tinyvec_macros-0.1.1 \
		tokio-1.43.0 \
		tokio-macros-2.5.0 \
		tokio-native-tls-0.3.1 \
		tokio-rustls-0.26.1 \
		tokio-util-0.7.13 \
		tokio-vsock-0.5.0 \
		toml_datetime-0.6.8 \
		toml_edit-0.22.23 \
		tower-0.5.2 \
		tower-layer-0.3.3 \
		tower-service-0.3.3 \
		tracing-0.1.41 \
		tracing-attributes-0.1.28 \
		tracing-core-0.1.33 \
		tracing-log-0.2.0 \
		tracing-subscriber-0.3.19 \
		try-lock-0.2.5 \
		typenum-1.17.0 \
		unicode-ident-1.0.16 \
		unicode-segmentation-1.12.0 \
		unicode-truncate-1.1.0 \
		unicode-width-0.1.14 \
		unicode-width-0.2.0 \
		untrusted-0.9.0 \
		url-2.5.4 \
		utf16_iter-1.0.5 \
		utf8-width-0.1.7 \
		utf8_iter-1.0.4 \
		utf8parse-0.2.2 \
		uuid-1.12.1 \
		uuid-simd-0.8.0 \
		valuable-0.1.1 \
		vcpkg-0.2.15 \
		version_check-0.9.5 \
		vsimd-0.8.0 \
		vsock-0.4.0 \
		wait-timeout-0.2.0 \
		want-0.3.1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasi-0.13.3+wasi-0.2.2 \
		wasm-bindgen-0.2.100 \
		wasm-bindgen-backend-0.2.100 \
		wasm-bindgen-futures-0.4.50 \
		wasm-bindgen-macro-0.2.100 \
		wasm-bindgen-macro-support-0.2.100 \
		wasm-bindgen-shared-0.2.100 \
		web-sys-0.3.77 \
		which-4.4.2 \
		widestring-1.1.0 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-0.58.0 \
		windows-core-0.52.0 \
		windows-core-0.58.0 \
		windows-implement-0.58.0 \
		windows-interface-0.58.0 \
		windows-registry-0.2.0 \
		windows-result-0.2.0 \
		windows-strings-0.1.0 \
		windows-sys-0.48.0 \
		windows-sys-0.52.0 \
		windows-sys-0.59.0 \
		windows-targets-0.48.5 \
		windows-targets-0.52.6 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.6 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.6 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.6 \
		windows_i686_gnullvm-0.52.6 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.6 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.6 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.6 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.6 \
		winnow-0.7.0 \
		winreg-0.50.0 \
		wit-bindgen-rt-0.33.0 \
		write16-1.0.0 \
		writeable-0.5.5 \
		wyz-0.5.1 \
		yasna-0.5.2 \
		yoke-0.7.5 \
		yoke-derive-0.7.5 \
		zerocopy-0.7.35 \
		zerocopy-0.8.14 \
		zerocopy-derive-0.7.35 \
		zerocopy-derive-0.8.14 \
		zerofrom-0.1.5 \
		zerofrom-derive-0.1.5 \
		zeroize-1.8.1 \
		zerovec-0.10.4 \
		zerovec-derive-0.10.3 \
		zstd-0.13.2 \
		zstd-safe-7.2.1 \
		zstd-sys-2.0.13+zstd.1.5.6

PLIST_FILES=	bin/oha

.include <bsd.port.mk>
