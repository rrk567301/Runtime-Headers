@class EFLocked, NSString, ECWebContentObserver, WKWebView, _WKRemoteObjectInterface, NSObject, EFCancelationToken;
@protocol OS_os_log, EFScheduler;

@interface EDWebContentParser : NSObject <ECWebContentObserver, WKNavigationDelegate, MEContentRuleListManagerObserver, EFSignpostable, WKScriptMessageHandler> {
    _WKRemoteObjectInterface *_webContentObserverInterface;
    ECWebContentObserver *_webContentObserver;
    EFCancelationToken *_token;
    EFLocked *_state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteContentParserLock;
    EFLocked *_currentContentRuleLists;
    EFCancelationToken *_contentRuleListsObservationToken;
}

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) id<EFScheduler> backgroundWorkScheduler;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL isDataDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)webViewConfiguration;
- (void)test_tearDown;
- (void)baseURL:(id)a0 didRequestRemoteContentURLs:(id)a1;
- (void)requestDataDetectionResultsWithBaseURL:(id)a0;
- (void)receiveDataDetectionResults:(id)a0;
- (void)logWebBundleMessage:(id)a0;
- (void)contentRuleListMangager:(id)a0 didAddRuleList:(id)a1;
- (void)contentRuleListMangager:(id)a0 didUpdateContentRuleList:(id)a1 oldContentRuleList:(id)a2;
- (void)contentRuleListMangager:(id)a0 didRemoveRuleList:(id)a1;
- (id)initWithOptions:(unsigned long long)a0 cancelationToken:(id)a1;
- (id)_richLinkMetadataScript;
- (void)parseHTMLData:(id)a0 withOptions:(unsigned long long)a1 characterEncodingName:(id)a2 forMessage:(id)a3 completionHandler:(id /* block */)a4;
- (id)_parseHTMLData:(id)a0 withOptions:(unsigned long long)a1 characterEncodingName:(id)a2 messageID:(id)a3;
- (void)_addRemoteContentWebViewObserver;
- (void)_enableDataDetection;
- (void)_disableDataDetection;
- (id)_extractDataDetectorResultsMetadata:(id)a0;
- (id)_getDataDetectionCategoryString:(int)a0;
- (void)_setContentRuleLists:(id)a0;
- (void)_setRemoteContentRuleLists:(id)a0;
- (void)_retrieveRichLinkMetadata:(id)a0;

@end
