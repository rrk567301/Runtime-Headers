@interface WKViewData : NSObject {
    struct unique_ptr<WebKit::WebViewImpl, std::default_delete<WebKit::WebViewImpl>> { struct __compressed_pair<WebKit::WebViewImpl *, std::default_delete<WebKit::WebViewImpl>> { struct WebViewImpl *__value_; } __ptr_; } _impl;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
