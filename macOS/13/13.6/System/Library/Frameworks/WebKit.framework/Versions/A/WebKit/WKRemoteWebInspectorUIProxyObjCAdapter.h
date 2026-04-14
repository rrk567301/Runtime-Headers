@class NSString;

@interface WKRemoteWebInspectorUIProxyObjCAdapter : NSObject <NSWindowDelegate, WKInspectorViewControllerDelegate> {
    void *_inspectorProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })window:(id)a0 willPositionSheet:(id)a1 usingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithRemoteWebInspectorUIProxy:(void *)a0;
- (void)inspectorViewControllerInspectorDidCrash:(id)a0;
- (BOOL)inspectorViewControllerInspectorIsUnderTest:(id)a0;
- (void)inspectorWKWebViewDidBecomeActive:(id)a0;

@end
