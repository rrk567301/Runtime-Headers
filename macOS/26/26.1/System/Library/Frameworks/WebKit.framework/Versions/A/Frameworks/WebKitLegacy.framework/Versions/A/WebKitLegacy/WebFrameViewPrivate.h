@class WebFrame, WebDynamicScrollBarsView;

@interface WebFrameViewPrivate : NSObject {
    WebFrame *webFrame;
    struct RetainPtr<WebDynamicScrollBarsView> { WebDynamicScrollBarsView *m_ptr; } frameScrollView;
    BOOL includedInWebKitStatistics;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
