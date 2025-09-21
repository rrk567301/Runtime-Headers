@interface WKViewFixedSizeLayoutStrategy : WKViewLayoutStrategy

- (void)updateLayout;
- (id)initWithPage:(struct reference_wrapper<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 view:(id)a1 viewImpl:(struct reference_wrapper<WebKit::WebViewImpl> { struct WebViewImpl *x0; })a2 mode:(unsigned int)a3;

@end
