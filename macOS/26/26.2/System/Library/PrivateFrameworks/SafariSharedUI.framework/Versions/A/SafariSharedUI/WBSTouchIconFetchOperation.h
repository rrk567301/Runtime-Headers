@class WBSSiteMetadataRequest, NSString, NSTimer, _WKRemoteObjectInterface, NSArray, NSSet, NSObject;
@protocol OS_os_activity;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver> {
    _WKRemoteObjectInterface *_touchIconObserverInterface;
    NSTimer *_loadingTimeoutTimer;
    NSArray *_pendingTouchIconURLs;
    NSSet *_touchIconURLs;
    long long _state;
    BOOL _allowFetchingOverCellularNetwork;
    struct CGSize { double width; double height; } _preferredFaviconSize;
    NSArray *_faviconScales;
    NSObject<OS_os_activity> *_activity;
}

@property (readonly, nonatomic) WBSSiteMetadataRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)isEqual:(id)a0;
- (void)resetState;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)webViewConfiguration;
- (void)didCompleteWithResult:(id)a0;
- (void)loadRequest;
- (void)_downloadFirstValidImageWithURLs:(id)a0 failureHandler:(id /* block */)a1;
- (void)_downloadPendingTouchIconURLs;
- (void)_scheduleTimeoutWithTimeInterval:(double)a0;
- (BOOL)_servesFaviconRequest;
- (void)_setUpRemoteObjectProxies;
- (BOOL)_shouldFetchOverPrivateRelay;
- (BOOL)_shouldFetchWithHTTPSOnly;
- (void)_tearDownRemoteObjectProxies;
- (void)clearWebView;
- (void)didCreateWebView;
- (void)didFailFetchWithError:(id)a0;
- (void)didFetchTouchIconURLs:(id)a0 fallbackTouchIconURLs:(id)a1 andFaviconURLs:(id)a2 fallbackFaviconURLs:(id)a3 forURL:(id)a4;
- (id)initWithRequest:(id)a0 allowFetchingOverCellularNetwork:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithRequest:(id)a0 allowFetchingOverCellularNetwork:(BOOL)a1 preferredFaviconSize:(struct CGSize { double x0; double x1; })a2 faviconScales:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithRequest:(id)a0 preferredFaviconSize:(struct CGSize { double x0; double x1; })a1 faviconScales:(id)a2 completionHandler:(id /* block */)a3;
- (void)startOffscreenFetching;
- (void)willClearWebView;

@end
