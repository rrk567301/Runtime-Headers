@class CKStoreClient, CKBag, NSArray, NSString, NSMutableDictionary, FRSuggester, FRWindowBackgroundView, CKStoreRequest, FRWKView;
@protocol FRStoreWebViewControllerDelegate;

@interface FRStoreWebViewController : FRContentViewController <CKAccountObserver>

@property (retain, nonatomic) CKStoreRequest *pendingRequest;
@property (retain, nonatomic) FRSuggester *hintsSuggester;
@property (retain, nonatomic) NSMutableDictionary *iconRequests;
@property (retain, nonatomic) NSArray *bagTabs;
@property (retain, nonatomic) NSArray *pendingBagTabs;
@property (retain, nonatomic) NSMutableDictionary *pageState;
@property (retain, nonatomic) NSMutableDictionary *redirectedURLs;
@property (readonly) FRWKView *webView;
@property (readonly) FRWindowBackgroundView *splashView;
@property (readonly) CKStoreClient *storeClient;
@property (weak) id<FRStoreWebViewControllerDelegate> delegate;
@property (readonly) CKBag *bag;
@property (copy) NSString *storefrontBagKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)selectTabBarItem:(id)a0;
- (void)reload;
- (void)_reachabilityChanged:(id)a0;
- (BOOL)loadRequest:(id)a0;
- (id)initWithStoreClient:(id)a0;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)goBack;
- (void)goForward;
- (id)activeURL;
- (void)clearHistory;
- (void)accountStore:(id)a0 primaryAccountChanged:(id)a1;
- (void)setTopContentInset:(double)a0;
- (void)setNavigationController:(id)a0;
- (BOOL)canLoadURL:(id)a0;
- (BOOL)loadURL:(id)a0 referrer:(id)a1;
- (id)navigationTabs;
- (BOOL)isTabEnabled:(id)a0;
- (void)webViewFinishedLoadingURL:(id)a0 withError:(id)a1;
- (void)webViewURL:(id)a0 redirectedToURL:(id)a1;
- (void)webViewStartedLoadingURL:(id)a0;
- (id)initWithStoreClient:(id)a0 defaultTabBarItems:(id)a1;
- (void)_updateFromStoreClient;
- (void)_bagUpdateFailedWithError:(id)a0;
- (void)_updateTabsWithToolbarInfo:(id)a0;
- (void)_loadPendingRequest;
- (void)_fetchIconAtURL:(id)a0 withIdentifier:(id)a1;
- (id)_storeSecureURLWithURL:(id)a0;
- (id)_comparisonDictionaryFromURL:(id)a0;
- (id)_tabBarIdentifierForURL:(id)a0;

@end
