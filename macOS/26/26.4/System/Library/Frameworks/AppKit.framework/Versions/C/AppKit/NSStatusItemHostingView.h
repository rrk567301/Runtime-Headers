@class FBScene, NSString, NSSceneHostingController;
@protocol NSStatusItemHostingViewDelegate;

@interface NSStatusItemHostingView : NSView <FBSceneObserver, NSSceneHostingControllerDelegate> {
    FBScene *_scene;
    long long _debugClientIdentifier;
    NSSceneHostingController *_hostingController;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _offScreenPositioningFrame;
}

@property (readonly) FBScene *scene;
@property (weak) id<NSStatusItemHostingViewDelegate> delegate;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } offScreenPositioningFrame;
@property BOOL disableEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseUp:(id)a0;
- (void)activate;
- (void)mouseDragged:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (id)initWithScene:(id)a0;
- (void)sceneDidInvalidate:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)mouseDown:(id)a0;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (id)_clientSettings;
- (void)_updateForDiff:(id)a0;
- (id)_hostSettings;
- (void)_hostingViewFrameDidChange:(id)a0;
- (void)_routeEvent:(id)a0 originatingView:(id)a1;
- (void)_updateOverrideScreenPoint;
- (void)_updateSettings:(id /* block */)a0;
- (void)_updateSettingsForWindow;
- (void)setItemViewHostingController:(id)a0;

@end
