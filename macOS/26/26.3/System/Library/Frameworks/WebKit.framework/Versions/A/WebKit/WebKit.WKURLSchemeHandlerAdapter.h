@interface WebKit.WKURLSchemeHandlerAdapter : NSObject <WKURLSchemeHandler> {
    void /* unknown type, empty encoding */ wrapped;
    void /* unknown type, empty encoding */ tasks;
}

- (id)init;
- (void).cxx_destruct;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;

@end
