--- chrome/browser/enterprise/signin/enterprise_signin_service.h.orig	2025-05-07 06:48:23 UTC
+++ chrome/browser/enterprise/signin/enterprise_signin_service.h
@@ -9,7 +9,7 @@
 
 #include "build/build_config.h"
 
-#if !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN))
+#if !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD))
 #error EnterpriseSigninService should only be built on desktop platforms.
 #endif  // !(BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN))
 
