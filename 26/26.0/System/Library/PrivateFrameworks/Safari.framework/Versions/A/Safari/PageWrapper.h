@interface PageWrapper : NSObject {
    struct Page { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _page;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a0;

@end
