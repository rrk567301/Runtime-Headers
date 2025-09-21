@interface WebInspectorFrontend : NSObject {
    struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *m_ptr; } m_frontendClient;
}

- (void)close;
- (id).cxx_construct;
- (void)detach;
- (void)setDebuggingEnabled:(char)a0;
- (char)isDebuggingEnabled;
- (void)attach;
- (id)initWithFrontendClient:(struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *x0; })a0;
- (char)isProfilingJavaScript;
- (char)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(char)a0;
- (void)showConsole;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end
