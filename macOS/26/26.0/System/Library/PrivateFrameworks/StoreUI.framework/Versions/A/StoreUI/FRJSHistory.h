@class FRWKView;

@interface FRJSHistory : FRJSObject

@property (readonly, weak) FRWKView *webView;

- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (id)callFunction:(id)a0 withArguments:(id)a1;

@end
