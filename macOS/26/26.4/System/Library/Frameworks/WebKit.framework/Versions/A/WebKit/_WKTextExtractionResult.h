@class NSString, NSDictionary, WKWebView;

@interface _WKTextExtractionResult : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _textContent;
    struct RetainPtr<NSDictionary<NSString *,NSURL *>> { NSDictionary *m_ptr; } _shortenedURLs;
    WKWebView *_webView;
}

@property (readonly, nonatomic) NSString *textContent;
@property (readonly, nonatomic) BOOL filteredOutAnyText;
@property (readonly, nonatomic) NSDictionary *shortenedURLs;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWebView:(id)a0 textContent:(id)a1 filteredOutAnyText:(BOOL)a2 shortenedURLs:(id)a3;
- (void)requestJSHandleForNodeIdentifier:(id)a0 searchText:(id)a1 completionHandler:(id /* block */)a2;

@end
