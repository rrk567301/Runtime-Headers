@class WKUserContentController, NSString, WKScriptMessage;

@interface WBSUIReaderAvailabilityMessageHandler : NSObject <WKScriptMessageHandlerWithReply>

@property (class, nonatomic, readonly) WBSUIReaderAvailabilityMessageHandler *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)userContentController:(WKUserContentController *)a0 didReceiveScriptMessage:(WKScriptMessage *)a1 replyHandler:(void (^)(id, NSString *))a2;

@end
