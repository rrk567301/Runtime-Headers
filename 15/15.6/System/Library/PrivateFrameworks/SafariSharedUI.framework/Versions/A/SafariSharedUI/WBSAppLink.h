@class LSAppLink, NSBundle, NSURL, LSApplicationProxy;

@interface WBSAppLink : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    char _didResolveAppLink;
    LSAppLink *_cachedAppLink;
    NSBundle *_cachedWebAppBundle;
}

@property (class, nonatomic) char shouldOfferToOpenAppleNewsArticlesInNewsApp;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic, getter=isWebAppLink) char isWebAppLink;
@property (readonly, nonatomic, getter=isAppleNewsLink) char isAppleNewsLink;
@property (readonly, nonatomic) LSApplicationProxy *synchronousTargetApplicationProxy;

+ (void)clearSavedSettings;
+ (id)_newsDataContainerPath;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)disable;
- (void)disableWithCompletionHandler:(id /* block */)a0;
- (long long)synchronouslyDecideOpenStrategy;
- (void)decideOpenStrategyWithCompletionHandler:(id /* block */)a0;
- (void)getAppLinkAttributesWithCompletionHandler:(id /* block */)a0;
- (void)getAppLinkLabel:(id *)a0 name:(id *)a1 bundleIdentifier:(id *)a2 icon:(id *)a3;
- (void)getAppLinkTargetApplicationBundleIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)openExternally;
- (void)openExternallyWithWebBrowserState:(id)a0 referrerURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateURL:(id)a0;
- (void)_appLink:(id)a0 getAppLinkLabel:(id *)a1 name:(id *)a2 bundleIdentifier:(id *)a3 icon:(id *)a4;
- (void)_findInstalledWebAppForBanner:(char)a0;
- (void)_getAppLinkForBanner:(char)a0 withCompletionHandler:(id /* block */)a1;
- (char)_isApplicationProxyAppleNews:(id)a0;
- (long long)_openStrategyForAppLink:(id)a0;
- (id)_scopeURLFromInfoDictionary:(id)a0;
- (void)_setCachedWebAppBundleWithBundlePath:(id)a0;
- (id)_synchronouslyFetchAppLinkWithError:(id *)a0;
- (id)_webAppBundlePathFromDiskUsingBlock:(id /* block */)a0;

@end
