@class _NSFullScreenMenuBarCompanionController, CALayer, NSVisualEffectView;

@interface NSToolbarFullScreenContentView : NSView {
    CALayer *_shadowLayer;
    CALayer *textureGradientLayer;
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

+ (double)heightForToolbarViewHeight:(double)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)mouseDown:(id)a0;
- (void)_windowChangedKeyState;
- (BOOL)isFlipped;
- (void)displayLayer:(id)a0;
- (struct NSToolbarFullScreenContentViewLayout_t { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; })getToolbarLayout;
- (BOOL)isSidebarOverlaid;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (id)getShadowImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 companionController:(id)a1;
- (void)clearCompanionController;
- (void)destroyToolbarLayers;
- (void)refreshLayerVisibility;
- (void)refreshLayerContents;
- (void)refreshSidebarEffectBackdrop;
- (void)createLayers;
- (void)refreshLayerFrames;

@end
