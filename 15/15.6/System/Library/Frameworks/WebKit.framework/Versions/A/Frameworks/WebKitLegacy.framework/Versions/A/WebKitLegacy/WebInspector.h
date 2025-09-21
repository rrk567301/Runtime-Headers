@class WebView, WebInspectorFrontend;

@interface WebInspector : NSObject {
    WebView *_inspectedWebView;
    WebInspectorFrontend *_frontend;
}

@property (readonly, nonatomic, getter=isOpen) char open;

- (void)dealloc;
- (void)close:(id)a0;
- (void)detach:(id)a0;
- (void)attach:(id)a0;
- (void)releaseFrontend;
- (void)evaluateInFrontend:(id)a0 script:(id)a1;
- (id)initWithInspectedWebView:(id)a0;
- (void)inspectedWebViewClosed;
- (char)isDebuggingJavaScript;
- (char)isJavaScriptProfilingEnabled;
- (char)isProfilingJavaScript;
- (char)isTimelineProfilingEnabled;
- (void)setFrontend:(id)a0;
- (void)setJavaScriptProfilingEnabled:(char)a0;
- (void)setTimelineProfilingEnabled:(char)a0;
- (void)show:(id)a0;
- (void)showConsole:(id)a0;
- (void)showWindow;
- (void)startDebuggingJavaScript:(id)a0;
- (void)startProfilingJavaScript:(id)a0;
- (void)stopDebuggingJavaScript:(id)a0;
- (void)stopProfilingJavaScript:(id)a0;
- (void)toggleDebuggingJavaScript:(id)a0;
- (void)toggleProfilingJavaScript:(id)a0;

@end
