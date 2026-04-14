@class NSView, NSString, VUINSNavigationBarButton, NSArray, VUINSNavigationItem, NSColor, VUINSNavigationPaletteView, NSScrollView, VUINSNavigationBarBackgroundView;
@protocol VUINSNavigationBarVisibilityThresholdProviding, VUINSNavigationBarDelegate;

@interface VUINSNavigationBar : NSView <NSScrollViewDelegate>

@property (retain, nonatomic) VUINSNavigationItem *topItem;
@property (retain, nonatomic) VUINSNavigationItem *backItem;
@property (retain, nonatomic) VUINSNavigationBarBackgroundView *backgroundView;
@property (retain, nonatomic) VUINSNavigationBarButton *backButton;
@property (retain, nonatomic) NSView *leftItemsContainerView;
@property (copy, nonatomic) NSArray *leftBarButtonViews;
@property (retain, nonatomic) NSView *titleView;
@property (weak, nonatomic) id<VUINSNavigationBarVisibilityThresholdProviding> visibilityThresholdProvider;
@property (nonatomic) BOOL showingLargeTitle;
@property (retain, nonatomic) VUINSNavigationPaletteView *largeTitlePaletteView;
@property (nonatomic) double percentageVisible;
@property (nonatomic) BOOL isLargeTitleHidden;
@property (nonatomic) BOOL isUnhidingLargeTitle;
@property (retain, nonatomic) NSView *rightItemsContainerView;
@property (copy, nonatomic) NSArray *rightBarButtonViews;
@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) NSColor *barTintColor;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id<VUINSNavigationBarDelegate> delegate;
@property (nonatomic) BOOL prefersLargeTitles;
@property (retain, nonatomic) NSView *largeTitleView;
@property (nonatomic) BOOL wantsLargeTitleOcclusion;
@property (nonatomic) BOOL snapToLargeTitle;
@property (retain, nonatomic) NSScrollView *scrollView;
@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)intrinsicHeight;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)layout;
- (void)didScrollInScrollView:(id)a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)reload:(BOOL)a0;
- (id)popNavigationItemAnimated:(BOOL)a0;
- (void)pushNavigationItem:(id)a0 animated:(BOOL)a1;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void)scrollViewDidEndLiveScroll:(id)a0;
- (double)contentInsetTop;
- (struct CGPoint { double x0; double x1; })_adjustedContentOffset:(id)a0;
- (id)_barButtonViewFromItem:(id)a0;
- (id)_createDefaultTitleTextField;
- (id)_createStackViewAddSubViews:(id)a0;
- (void)_hideLargeTitleViews;
- (void)_unhideLargeTitleViews;
- (void)_updateBackgroundAndTitleViewTransparency:(double)a0;
- (void)_updateBarButtonViews:(double)a0;
- (void)_updateNavigationBarVisibility;
- (void)_updateNavigationBarWithItem:(id)a0;
- (void)showEdgeAppearance:(BOOL)a0;

@end
