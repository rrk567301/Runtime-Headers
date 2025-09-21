@class WBSSiteMetadataRequest, NSString, NSTimer, _WKRemoteObjectInterface, NSArray, NSSet, NSObject;
@protocol OS_os_activity;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver> {
    _WKRemoteObjectInterface *_touchIconObserverInterface;
    NSTimer *_loadingTimeoutTimer;
    NSArray *_pendingTouchIconURLs;
    NSSet *_touchIconURLs;
    long long _state;
    char _allowFetchingOverCellularNetwork;
    NSObject<OS_os_activity> *_activity;
}

@property (readonly, nonatomic) WBSSiteMetadataRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)resetState;
- (id)initWithRequest:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)webViewConfiguration;
- (void)didCompleteWithResult:(id)a0;
- (void)loadRequest;
- (void)_downloadFirstValidImageWithURLs:(id)a0 failureHandler:(id /* block */)a1;
- (void)_downloadPendingTouchIconURLs;
- (void)_scheduleTimeoutWithTimeInterval:(double)a0;
- (void)_setUpRemoteObjectProxies;
- (char)_shouldFetchOverPrivateRelay;
- (char)_shouldFetchWithHTTPSOnly;
- (void)_tearDownRemoteObjectProxies;
- (void)clearWebView;
- (void)didCreateWebView;
- (void)didFailFetchWithError:(id)a0;
- (void)didFetchTouchIconURLs:(id)a0 andFaviconURLs:(id)a1 forURL:(id)a2;
- (id)initWithRequest:(id)a0 allowFetchingOverCellularNetwork:(char)a1 completionHandler:(id /* block */)a2;
- (void)startOffscreenFetching;
- (void)willClearWebView;

@end
