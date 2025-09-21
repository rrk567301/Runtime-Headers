@class UINSSceneView, NSArray, NSLayoutConstraint, NSMutableArray;

@interface UINSSceneContainerView : NSView {
    BOOL _constraintsNeedUpdate;
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
@property (nonatomic, getter=isFullscreenScene) BOOL fullscreenScene;
@property (nonatomic, getter=isSceneViewPinned) BOOL sceneViewPinned;
@property (nonatomic, getter=isSceneViewZoomEnabled) BOOL sceneViewZoomEnabled;
@property (nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;
@property (nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;
@property (nonatomic) double sceneToSceneViewScaleForLayout;
@property (nonatomic) struct CGSize { double width; double height; } sceneCurrentSize;
@property (nonatomic) struct CGSize { double width; double height; } sceneMinSize;
@property (nonatomic) struct CGSize { double width; double height; } sceneMaxSize;
@property (nonatomic) struct CGSize { double width; double height; } maxContentSizeForScreen;
@property (nonatomic) int counterRotation;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)_keysAffectingConstraints;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)_dumpContentViewLayers;
- (struct CGSize { double x0; double x1; })_size:(struct CGSize { double x0; double x1; })a0 shouldSwapAxes:(BOOL)a1;
- (id)_updateAspectConstraintWithAspect:(double)a0;

@end
