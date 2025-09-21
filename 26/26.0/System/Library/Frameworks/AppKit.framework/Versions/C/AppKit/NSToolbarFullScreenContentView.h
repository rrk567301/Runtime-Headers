@class _NSFullScreenMenuBarCompanionController, CALayer, NSVisualEffectView;

@interface NSToolbarFullScreenContentView : NSView {
    CALayer *_shadowLayer;
    CALayer *opaqueBackstopLayer;
    BOOL _needsOpaqueBackstop;
    NSVisualEffectView *_sidebarEffectBackdrop;
    NSVisualEffectView *_trailingSidebarEffectBackdrop;
}

@property (nonatomic) double revealProgress;
@property (nonatomic) double toolbarViewHeight;
@property (nonatomic) double sidebarDividerPosition;
@property (nonatomic) double trailingSidebarDividerPosition;
@property (nonatomic) double shadowWeight;
@property (readonly, weak) _NSFullScreenMenuBarCompanionController *companionController;
@property (nonatomic) BOOL needsOpaqueBackstop;

+ (double)heightForToolbarViewHeight:(double)a0 hasSolariumAppearance:(BOOL)a1;

- (void)mouseDown:(id)a0;
- (BOOL)isOpaque;
- (void)updateLayer;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)_windowChangedKeyState;
- (void)clearCompanionController;
- (void)createLayers;
- (void)destroyToolbarLayers;
- (id)getShadowImage;
- (struct NSToolbarFullScreenContentViewLayout_t { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; })getToolbarLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 companionController:(id)a1;
- (BOOL)isSidebarOverlaid;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (void)refreshLayerContents;
- (void)refreshLayerFrames;
- (void)refreshLayerVisibility;
- (void)refreshSidebarEffectBackdrop;
- (BOOL)wantsUpdateLayer;

@end
