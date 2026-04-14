@class NSArray, WKProcessPool, NSURL, NSMutableSet;

@interface WBSWebViewPoolManager : NSObject {
    WKProcessPool *_processPool;
    NSMutableSet *_usedWebViews;
    NSMutableSet *_reusableWebViews;
}

@property (readonly, copy, nonatomic) NSURL *injectedBundleURL;
@property (copy, nonatomic) NSArray *additionalReadAccessAllowedURLs;
@property (readonly, nonatomic) unsigned long long preferredNumberOfConcurrentWebViews;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInjectedBundleURL:(id)a0;
- (id)_processPool;
- (void)_discardWebViewSoon:(id)a0;
- (id)_popReusableWebView;
- (void)didFinishUsingWebView:(id)a0;
- (void)getWebViewOfSize:(struct CGSize { double x0; double x1; })a0 withConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithInjectedBundleURL:(id)a0 additionalReadAccessAllowedURLs:(id)a1;

@end
