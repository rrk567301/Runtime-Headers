@interface _WKAttributedStringWebViewCache : NSObject

+ (id)configuration;
+ (id)cache;
+ (void)resetPurgeDelay;
+ (void)purgeSingleWebView;
+ (void)clearConfiguration;
+ (struct RetainPtr<WKWebView> { void *x0; })retrieveOrCreateWebView;
+ (void)cacheWebView:(id)a0;
+ (void)purgeAllWebViews;

@end
