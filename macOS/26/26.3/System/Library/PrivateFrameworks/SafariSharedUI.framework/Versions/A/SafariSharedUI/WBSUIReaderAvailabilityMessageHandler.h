@class WKUserContentController, NSString, WKScriptMessage;

@interface WBSUIReaderAvailabilityMessageHandler : NSObject <WKScriptMessageHandlerWithReply>

@property (class, nonatomic, readonly) WBSUIReaderAvailabilityMessageHandler *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)userContentController:(WKUserContentController *)a0 didReceiveScriptMessage:(WKScriptMessage *)a1 replyHandler:(void (^)(id, NSString *))a2;

@end
