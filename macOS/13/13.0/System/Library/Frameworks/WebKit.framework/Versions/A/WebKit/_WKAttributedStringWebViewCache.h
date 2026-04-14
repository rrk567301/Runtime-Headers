@interface _WKAttributedStringWebViewCache : NSObject

+ (id)configuration;
+ (id)cache;
+ (void)purgeSingleWebView;
+ (void)clearConfiguration;
+ (struct RetainPtr<WKWebView> { void *x0; })retrieveOrCreateWebView;
+ (void)cacheWebView:(id)a0;
+ (void)resetPurgeDelay;
+ (void)purgeAllWebViews;

@end
