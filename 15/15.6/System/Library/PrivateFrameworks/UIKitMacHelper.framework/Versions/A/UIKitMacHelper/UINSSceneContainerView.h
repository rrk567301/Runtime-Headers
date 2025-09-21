@class UINSSceneView, NSArray, NSLayoutConstraint, NSMutableArray;

@interface UINSSceneContainerView : NSView {
    char _constraintsNeedUpdate;
    NSMutableArray *_allCustomLayoutConstraints;
    NSLayoutConstraint *_sceneWidthConstraint;
    NSLayoutConstraint *_sceneHeightConstraint;
    NSLayoutConstraint *_sceneMinWidthConstraint;
    NSLayoutConstraint *_sceneMinHeightConstraint;
    NSLayoutConstraint *_sceneMaxWidthConstraint;
    NSLayoutConstraint *_sceneMaxHeightConstraint;
    NSLayoutConstraint *_currentSceneAspectConstraint;
    NSArray *_centerSceneInContainerConstraints;
    NSArray *_fitSceneIntoContainerConstraints;
    NSArray *_pinSceneAndContainerEdgesConstraints;
    NSLayoutConstraint *_containerLessThanScreenWidthConstraint;
    NSLayoutConstraint *_containerLessThanScreenHeightConstraint;
}

@property (retain, nonatomic) UINSSceneView *sceneView;
@property (nonatomic, getter=isFullscreenScene) char fullscreenScene;
@property (nonatomic, getter=isSceneViewPinned) char sceneViewPinned;
@property (nonatomic, getter=isSceneViewZoomEnabled) char sceneViewZoomEnabled;
@property (nonatomic, getter=isTransitioningToFullscreen) char transitioningToFullscreen;
@property (nonatomic, getter=isTransitioningFromFullscreen) char transitioningFromFullscreen;
@property (nonatomic) double sceneToSceneViewScaleForLayout;
@property (nonatomic) struct CGSize { double width; double height; } sceneCurrentSize;
@property (nonatomic) struct CGSize { double width; double height; } sceneMinSize;
@property (nonatomic) struct CGSize { double width; double height; } sceneMaxSize;
@property (nonatomic) struct CGSize { double width; double height; } maxContentSizeForScreen;
@property (nonatomic) int counterRotation;

+ (char)requiresConstraintBasedLayout;
+ (id)_keysAffectingConstraints;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_dumpContentViewLayers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (struct CGSize { double x0; double x1; })_size:(struct CGSize { double x0; double x1; })a0 shouldSwapAxes:(char)a1;
- (id)_updateAspectConstraintWithAspect:(double)a0;

@end
