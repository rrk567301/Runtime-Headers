@class WebFrame;

@interface WebFrameViewPrivate : NSObject {
    WebFrame *webFrame;
    struct RetainPtr<WebDynamicScrollBarsView> { void *m_ptr; } frameScrollView;
    char includedInWebKitStatistics;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
