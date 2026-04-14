@class NSDate, NSData, NSURL, CKSigningSession, NSLock, CKStoreClient, NSString, FRStoreWebViewController, NSMutableArray, FRJSRootObject;
@protocol FRWKViewDelegate;

@interface FRWKView : WKView <FRJSMessagingDelegate> {
    struct OpaqueWKContext { } *_processContextRef;
}

@property (weak, nonatomic) FRStoreWebViewController *storeWebViewController;
@property (retain, nonatomic) CKSigningSession *accountCreationSigningSession;
@property (nonatomic) BOOL initialLoadCommitted;
@property (retain, nonatomic) NSMutableArray *messageQueue;
@property (retain, nonatomic) NSLock *messageQueueLock;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL shouldClearHistoryOnNextLoad;
@property (nonatomic) BOOL shouldKeepCurrentHistoryItem;
@property (retain) NSData *resumeBuyData;
@property (retain, nonatomic) NSURL *loadingURL;
@property (retain) NSDate *loadStartTime;
@property (weak, nonatomic) id<FRWKViewDelegate> delegate;
@property (readonly, nonatomic) CKStoreClient *storeClient;
@property (readonly, nonatomic) FRJSRootObject *rootObject;
@property BOOL disableScrolling;
@property double topContentInset;
@property (nonatomic) BOOL navigationEnabled;
@property (readonly, nonatomic) NSURL *activeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidUnhide;
- (void)reload;
- (BOOL)loadRequest:(id)a0;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)goBack;
- (void)goForward;
- (id)_immediateActionAnimationControllerForHitTestResult:(struct OpaqueWKHitTestResult { } *)a0 withType:(unsigned int)a1 userData:(void *)a2;
- (void)clearHistory;
- (BOOL)loadURL:(id)a0;
- (void)cancelLoad;
- (void)_loadRequest:(id)a0;
- (void)_doAction:(id)a0;
- (void)sendMessage:(id)a0 messageBody:(id)a1;
- (id)sendSynchronousMessage:(id)a0 messageBody:(id)a1;
- (struct OpaqueWKContext { } *)_primaryWebProcess;
- (struct WKPageLoaderClientV5 { struct WKPageLoaderClientBase { int x0; void *x1; } x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; })_loadClient;
- (struct WKPagePolicyClientV1 { struct WKPagePolicyClientBase { int x0; void *x1; } x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; })_policyClient;
- (struct WKPageUIClientV5 { struct WKPageUIClientBase { int x0; void *x1; } x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void *x37; void /* function */ *x38; void *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void *x48; void *x49; void *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void *x57; })_uiClient;
- (struct WKPageContextMenuClientV3 { struct WKPageContextMenuClientBase { int x0; void *x1; } x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; })_contextMenuClient;
- (struct WKContextInjectedBundleClientV1 { struct WKContextInjectedBundleClientBase { int x0; void *x1; } x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; })_bundleClient;
- (void)viewWillHide;
- (BOOL)_dismissIfSheet;
- (BOOL)_url:(id)a0 isEqualToBackForwardListItem:(struct OpaqueWKBackForwardListItem { } *)a1;
- (BOOL)_canGoBackToURL:(id)a0;
- (BOOL)_canGoForwardToURL:(id)a0;
- (void)_loadAccountCreationRequest:(id)a0;
- (void)_isAccountCreationURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (struct WKContextDownloadClientV0 { struct WKContextDownloadClientBase { int x0; void *x1; } x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; })_downloadClient;
- (void)_buttonClicked:(char)a0 forDialog:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 storeClient:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForDOMElement:(id)a0;
- (void)clearAllCaches:(id)a0;
- (void)clearHistoryOnNextLoad;
- (void)removeCurrentPage;
- (void)goToHistoryIndex:(long long)a0;
- (void)loadHTML:(id)a0;
- (void)processStorePlistResponse:(id)a0;

@end
