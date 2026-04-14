@interface _WKAttributedStringWebViewCache : NSObject

+ (void)clearConfiguration;
+ (id)cache;
+ (id)configuration;
+ (void)resetPurgeDelay;
+ (void)cacheWebView:(id)a0;
+ (void)clearConfigurationAndRaiseExceptionIfNecessary:(id)a0;
+ (void)invalidateGlobalConfigurationIfNeeded:(id)a0;
+ (void)maybeConsumeBundlePaths:(id)a0;
+ (void)maybeUpdateShouldAllowNetworkLoads:(id)a0;
+ (void)maybeUpdateSourceApplicationBundleIdentifier:(id)a0;
+ (void)purgeAllWebViews;
+ (void)purgeSingleWebView;
+ (struct RetainPtr<WKWebView> { id x0; })retrieveOrCreateWebView;
+ (void)validateEntry:(id)a0;

@end
