@class NSString, WKWebView;
@protocol _WKInspectorDelegate;

@interface _WKInspector : NSObject <WKObject, _WKInspectorExtensionHost, _WKInspectorIBActions> {
    struct ObjectStorage<WebKit::WebInspectorUIProxy> { struct type { unsigned char __lx[200]; } data; } _inspector;
    struct WeakObjCPtr<id<_WKInspectorDelegate>> { id m_weakReference; } _delegate;
}

@property (weak, nonatomic) id<_WKInspectorDelegate> delegate;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL isFront;
@property (readonly, nonatomic) BOOL isProfilingPage;
@property (readonly, nonatomic) BOOL isElementSelectionActive;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WKWebView *extensionHostWebView;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)detach;
- (id).cxx_construct;
- (void)connect;
- (void)hide;
- (void)show;
- (void)attach;
- (void)showConsole;
- (void)_setDiagnosticLoggingDelegate:(id)a0;
- (id)inspectorWebView;
- (void)registerExtensionWithID:(id)a0 extensionBundleIdentifier:(id)a1 displayName:(id)a2 completionHandler:(id /* block */)a3;
- (void)unregisterExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)showExtensionTabWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)showResources;
- (void)showMainResourceForFrame:(id)a0;
- (void)togglePageProfiling;
- (void)toggleElementSelection;
- (void)printErrorToConsole:(id)a0;
- (void)_fetchURLForTesting:(id)a0;
- (void)_openURLExternallyForTesting:(id)a0 useFrontendAPI:(BOOL)a1;

@end
