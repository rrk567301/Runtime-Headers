@class WKWebView;

@interface _WKASDelegate : NSObject {
    struct RetainPtr<WKWebView> { WKWebView *m_ptr; } m_view;
    struct BlockPtr<void (ASAuthorization *, NSError *)> { id /* block */ m_block; } m_completionHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (id)initWithPage:(void *)a0 completionHandler:(void *)a1;

@end
