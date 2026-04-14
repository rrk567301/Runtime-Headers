@interface WBSQuickWebsiteSearchJavaScriptInjectionController : WBSJavaScriptInjectionController <WBSJavaScriptInjectionControllerScriptMessageHandler, WKScriptMessageHandler>

@property (class, nonatomic, readonly) WBSQuickWebsiteSearchJavaScriptInjectionController *sharedController;

@property (nonatomic, weak) void /* function */ delegate;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)addScriptMessageHandlerToUserContentController:(id)a0;
- (id)initWithUserScriptProvider:(id)a0 contentWorld:(id)a1;

@end
