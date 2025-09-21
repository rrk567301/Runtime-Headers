@class SiriSharedUIContentPlatterScrollView, SiriSharedUIContentPlatterDarkenMaskView, NSArray, SiriSharedUIPanDismissalGestureRecognizer, NSString, SiriSharedUINotificationCenterPlatterView, SiriSharedUIStandardView;
@protocol SiriSharedUIContentPlatterViewDelegate, SiriSharedUIContentViewSizeProviding;

@interface SiriSharedUIContentPlatterView : SiriSharedUIStandardView <NSScrollViewDelegate, SiriSharedUIContentPlatterScrollViewDelegate, SiriSharedUIDarkening, SiriSharedUIAccessibilityFocusing> {
    char _reducedOrbOpacity;
    char _supportsSAE;
    char _makeBackgroundPlatterTransparent;
    double _minimumScrollViewBottomInset;
}

@property (retain, nonatomic, getter=_contentHostingView) SiriSharedUIStandardView *contentHostingView;
@property (retain, nonatomic, getter=_scrollView) SiriSharedUIContentPlatterScrollView *scrollView;
@property (retain, nonatomic, getter=_darkenMaskView) SiriSharedUIContentPlatterDarkenMaskView *darkenMaskView;
@property (nonatomic, getter=_platterNeedsLayout, setter=_setPlatterNeedsLayout:) char platterNeedsLayout;
@property (nonatomic, getter=_shouldAllowDismissalWhenScrollable, setter=_setShouldAllowDismissalWhileScrollable:) char shouldAllowDismissalWhileScrollable;
@property (nonatomic, getter=_currentContentOffset, setter=_setCurrentContentOffset:) double currentContentOffset;
@property (retain, nonatomic) SiriSharedUINotificationCenterPlatterView *platterView;
@property (weak, nonatomic) id<SiriSharedUIContentPlatterViewDelegate> delegate;
@property (retain, nonatomic) NSArray *contentViews;
@property (nonatomic, getter=isScrollEnabled) char scrollEnabled;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) double heightForContentSeparators;
@property (retain, nonatomic) SiriSharedUIPanDismissalGestureRecognizer *dismissalGestureRecognizer;
@property (nonatomic) char isInAmbient;
@property (nonatomic) char isInAmbientInteractivity;
@property (nonatomic) char allowAutomaticContentViewsScaling;
@property (nonatomic) char isNextLevelCard;
@property (weak, nonatomic) id<SiriSharedUIContentViewSizeProviding> contentViewSizeProvider;
@property (setter=_setWantsPageAlignedHorizontalAxis:) char _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) char _wantsPageAlignedVerticalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double darkenIntensity;

- (void).cxx_destruct;
- (void)layout;
- (void)setNeedsLayout:(char)a0;
- (void)didScrollInScrollView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)setBackgroundView:(id)a0;
- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(char)a1;
- (id)preferredAccessibilityElementToFocus;
- (void)setOffersDismissal:(char)a0 actionHandler:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_adjustedContentInsetForScrollView:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollView:(id)a0;
- (struct CGSize { double x0; double x1; })_contentSizeForScrollView:(id)a0;
- (void)_updateContentScale;
- (void)_updateContentViewTransformationForAmbientUpdate;
- (id)contentPlatterScrollView;
- (void)prepareForDrillInAnimation;
- (void)prepareForPopAnimationOfType:(long long)a0;
- (void)setMinimumScrollViewBottomInset:(double)a0;
- (char)shouldAllowSimultaneousGestureRecognizersForScrollView:(id)a0;

@end
