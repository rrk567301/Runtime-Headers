@interface _WKAttributedStringWebViewCache : NSObject

+ (id)configuration;
+ (id)cache;
+ (void)purgeSingleWebView;
+ (void)clearConfiguration;
+ (void)clearConfigurationAndRaiseExceptionIfNecessary:(id)a0;
+ (void)validateEntry:(id)a0;
+ (void)maybeConsumeBundlePaths:(id)a0;
+ (struct RetainPtr<WKWebView> { void *x0; })retrieveOrCreateWebView;
+ (void)cacheWebView:(id)a0;
+ (void)resetPurgeDelay;
+ (void)purgeAllWebViews;

@end
