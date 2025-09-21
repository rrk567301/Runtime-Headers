@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader

+ (void)initialize;
+ (id)_accessibilityBundlesForBundle:(id)a0;
+ (void)_accessibilityLoadSubbundles:(id)a0;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)a0;
+ (char)_accessibilityShouldSortBundlesBeforeLoading;
+ (id)_axBundleForBundle:(id)a0;
+ (void)loadAccessibilityBundle:(id)a0 didLoadCallback:(id /* block */)a1 loadSubbundles:(char)a2;
+ (void)loadAccessibilityBundleForBundle:(id)a0 didLoadCallback:(id /* block */)a1 forceLoad:(char)a2 loadSubbundles:(char)a3 loadAllAccessibilityInfo:(char)a4;
+ (void)loadExtendedAccessibilityBundles;

@end
