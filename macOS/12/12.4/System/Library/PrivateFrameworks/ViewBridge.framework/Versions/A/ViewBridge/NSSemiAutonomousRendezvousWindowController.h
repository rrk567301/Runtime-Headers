@interface NSSemiAutonomousRendezvousWindowController : NSRendezvousWindowController

+ (unsigned long long)acceptableStyleMask;
+ (void)addBridgeKeys:(id)a0;
+ (void)addPanelBridgeKeys:(id)a0;

- (id)appearance;
- (id)requestResize:(struct CGSize { double x0; double x1; })a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_serviceWindowFrameForRemoteViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldNormalizeAppearance;
- (BOOL)allowsWindowFrameOriginChanges;
- (id)requestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (id)accessibilityRoot;
- (unsigned long long)awakeFromRemoteView;
- (void)_viewDidChangeEffectiveAppearance:(id)a0;
- (void)windowWillOrder:(long long)a0 relativeTo:(long long)a1;
- (id)objectToObserveForKey:(id)a0 withWindow:(id)a1;
- (BOOL)shouldInvalidateWhenOrderingOut;

@end
