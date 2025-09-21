@class NSString, WebFrameView;

@interface WebFramePrivate : NSObject {
    struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame *m_ptr; } coreFrame;
    struct RetainPtr<WebFrameView> { WebFrameView *m_ptr; } webFrameView;
    struct unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> { struct WebScriptDebugger *__ptr_; } scriptDebugger;
    struct unique_ptr<WebCore::CaptionUserPreferencesTestingModeToken, std::default_delete<WebCore::CaptionUserPreferencesTestingModeToken>> { struct CaptionUserPreferencesTestingModeToken *__ptr_; } captionPreferencesTestingModeToken;
    id internalLoadDelegate;
    BOOL shouldCreateRenderers;
    BOOL includedInWebKitStatistics;
    struct RetainPtr<NSString> { NSString *m_ptr; } url;
    struct RetainPtr<NSString> { NSString *m_ptr; } provisionalURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setWebFrameView:(id)a0;

@end
