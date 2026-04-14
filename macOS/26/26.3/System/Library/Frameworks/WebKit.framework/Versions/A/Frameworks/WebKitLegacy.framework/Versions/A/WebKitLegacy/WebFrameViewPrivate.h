@class WebFrame, WebDynamicScrollBarsView;

@interface WebFrameViewPrivate : NSObject {
    WebFrame *webFrame;
    struct RetainPtr<WebDynamicScrollBarsView> { WebDynamicScrollBarsView *m_ptr; } frameScrollView;
    BOOL includedInWebKitStatistics;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
