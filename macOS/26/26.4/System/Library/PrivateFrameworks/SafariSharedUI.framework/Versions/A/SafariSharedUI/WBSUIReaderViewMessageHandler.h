@class WKUserContentController, NSString, WKScriptMessage;

@interface WBSUIReaderViewMessageHandler : NSObject <WKScriptMessageHandlerWithReply> {
    void /* unknown type, empty encoding */ readerViewToArticleViewMap;
}

@property (class, nonatomic, readonly) WBSUIReaderViewMessageHandler *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)userContentController:(WKUserContentController *)a0 didReceiveScriptMessage:(WKScriptMessage *)a1 replyHandler:(void (^)(id, NSString *))a2;
- (void)setArticleWebView:(id)a0 forReaderView:(id)a1;

@end
