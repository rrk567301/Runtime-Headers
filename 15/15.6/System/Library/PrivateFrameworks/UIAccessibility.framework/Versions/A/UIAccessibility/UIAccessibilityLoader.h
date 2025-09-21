@interface UIAccessibilityLoader : NSObject

+ (void)_accessibilityReenabled;
+ (void)_accessibilityStartServer;
+ (void)_accessibilityStopServer;
+ (char)_accessibilityUIKitBundleLoaded;
+ (id)_accessibilityBundlesForBundle:(id)a0;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (char)_accessibilityServerStarted;
+ (void)_accessibilityStartMiniServer;
+ (char)_accessibilityStringLocalizationCategoriesLoaded;
+ (void)_accessibilityUpdateSafeCategoryThread;
+ (void)_didLoadPreboardAccessibilityBundle;
+ (void)_didLoadSystemAppAccessibilityBundle;
+ (void)_performInitialAccessibilityBundleLoad:(char)a0 monitorForFutureLoadEvents:(char)a1 trackingMode:(long long)a2;
+ (void)_stringLocalizationStarted:(id)a0;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 force:(char)a2 loadAllAccessibilityInfo:(char)a3;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(char)a2;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 force:(char)a2 loadAllAccessibilityInfo:(char)a3;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 forceLoad:(char)a2 loadSubbundles:(char)a3 loadAllAccessibilityInfo:(char)a4;
+ (void)loadActualAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(char)a2;

@end
