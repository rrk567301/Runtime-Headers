@class NSString, NSArray, AMSUIWebClientContext, _WKRemoteObjectInterface, AMSBinaryPromise, AMSUIWebDelegateProxy, WKWebView;
@protocol AMSUIWebViewPluginInterface;

@interface AMSUIWebView : AMSUICommonView <AMSUIWebViewClientInterface, WKUIDelegate, WKNavigationDelegatePrivate>

@property (retain) NSArray *baseScripts;
@property (retain) AMSBinaryPromise *contentRulesPromise;
@property (weak) AMSUIWebClientContext *context;
@property (retain) AMSBinaryPromise *currentLoadPromise;
@property (retain) _WKRemoteObjectInterface *exportedInterface;
@property (retain) AMSUIWebDelegateProxy *exportedObjectProxy;
@property (retain) id<AMSUIWebViewPluginInterface> remoteProxy;
@property (readonly) BOOL contentLoaded;
@property double topInset;
@property double bottomInset;
@property (readonly) WKWebView *underlyingWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getSetCookiesForResponse:(id)a0;
+ (id)_sharedProcessPool;

- (void)dealloc;
- (void).cxx_destruct;
- (id)loadRequest:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)webView:(id)a0 runOpenPanelWithParameters:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)layoutSubviews;
- (void)_webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2 userInfo:(id)a3;
- (void)_webView:(id)a0 navigation:(id)a1 didFailProvisionalLoadInSubframe:(id)a2 withError:(id)a3;
- (void)_webView:(id)a0 navigationDidFinishDocumentLoad:(id)a1;
- (void)_webView:(id)a0 navigation:(id)a1 didSameDocumentNavigation:(long long)a2;
- (void)_webView:(id)a0 webContentProcessDidTerminateWithReason:(long long)a1;
- (void)_webView:(id)a0 contentRuleListWithIdentifier:(id)a1 performedAction:(id)a2 forURL:(id)a3;
- (id)initWithContext:(id)a0 additionalScripts:(id)a1;
- (id)sendJSRequest:(id)a0;
- (void)updateUserScriptsWithScripts:(id)a0;
- (id)loadRequest:(id)a0 response:(id)a1 responseData:(id)a2;
- (void)takeSnapshotWithCompletion:(id /* block */)a0;
- (void)_addScriptsToContentController:(id)a0 additionalScripts:(id)a1;
- (void)_unregisterProxies;
- (id)_prepareWithURL:(id)a0 loadBlock:(id /* block */)a1;
- (id)_setupContentRulesForWebView:(id)a0 context:(id)a1;
- (void)webPlugInDidCreateContext;
- (void)webPlugInWillDestroyContext;
- (void)frameFinishedLoading;
- (void)receiveJSObject:(id)a0 logKey:(id)a1 completion:(id /* block */)a2;
- (void)_webView:(id)a0 didFailToInitializePlugInWithInfo:(id)a1;

@end
