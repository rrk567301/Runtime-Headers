@class WebView, WebInspectorFrontend;

@interface WebInspector : NSObject {
    WebView *_inspectedWebView;
    WebInspectorFrontend *_frontend;
}

@property (readonly, nonatomic, getter=isOpen) BOOL open;

- (void)dealloc;
- (void)close:(id)a0;
- (id)initWithInspectedWebView:(id)a0;
- (void)inspectedWebViewClosed;
- (void)showWindow;
- (void)show:(id)a0;
- (void)showConsole:(id)a0;
- (BOOL)isDebuggingJavaScript;
- (void)toggleDebuggingJavaScript:(id)a0;
- (void)startDebuggingJavaScript:(id)a0;
- (void)stopDebuggingJavaScript:(id)a0;
- (BOOL)isProfilingJavaScript;
- (void)toggleProfilingJavaScript:(id)a0;
- (void)startProfilingJavaScript:(id)a0;
- (void)stopProfilingJavaScript:(id)a0;
- (BOOL)isJavaScriptProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:(BOOL)a0;
- (BOOL)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(BOOL)a0;
- (void)attach:(id)a0;
- (void)detach:(id)a0;
- (void)evaluateInFrontend:(id)a0 script:(id)a1;
- (void)setFrontend:(id)a0;
- (void)releaseFrontend;

@end
