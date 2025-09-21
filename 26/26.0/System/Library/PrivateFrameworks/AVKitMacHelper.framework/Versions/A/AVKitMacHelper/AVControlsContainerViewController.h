@class NSView, NSGlassView, NSLayoutGuide, NSGlassContainerView, NSVisualEffectView, NSViewController, NSMutableArray, AVMovableView, AVControlsPresentationContext, NSLayoutConstraint;
@protocol AVControlsContainerViewContentLayout, AVControlsContainerViewControllerContent;

@interface AVControlsContainerViewController : NSViewController {
    NSViewController<AVControlsContainerViewControllerContent> *_controlsContentViewController;
    NSVisualEffectView *_backgroundView;
    NSView *_additionalControlsBackgroundView;
    AVMovableView *_movableView;
    NSMutableArray *_movableViewLayoutConstraints;
    NSView *_additionalControlsView;
    NSView<AVControlsContainerViewContentLayout> *_additionalNewControlsView;
    NSMutableArray *_additionalControlsViewLayoutConstraints;
    NSLayoutGuide *_preferredIndicatorAreaLayoutGuide;
    NSMutableArray *_preferredIndicatorAreaLayoutConstraints;
    NSLayoutConstraint *_leftConstraint;
    BOOL _animatingControls;
    BOOL _showsGlassBackground;
    NSGlassContainerView *_glassContainerView;
    NSGlassView *_controlsBackgroundGlassView;
    NSGlassView *_volumeControlsContainerView;
    NSMutableArray *_volumeControlsContainerViewConstraints;
    NSLayoutConstraint *_volumeControlsLeadingConstraint;
    NSView *_topControlsContainerView;
    NSGlassContainerView *_topControlsGlassContainerView;
}

@property (retain, nonatomic) AVControlsPresentationContext *controlsPresentationContext;
@property (retain, nonatomic) NSViewController<AVControlsContainerViewControllerContent> *controlsContentViewController;
@property (nonatomic) BOOL showsControls;
@property (nonatomic) BOOL showsDimmingLayer;
@property (readonly, nonatomic) NSLayoutGuide *preferredIndicatorAreaLayoutGuide;

- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)viewDidLayout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_setUpAdditionalControlsViewIfNeeded;

@end
