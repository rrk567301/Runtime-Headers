@class SiriSharedUIContentPlatterScrollView, SiriSharedUIContentPlatterDarkenMaskView, NSArray, NSString, SiriSharedUINotificationCenterPlatterView, SiriSharedUIPanDismissalGestureRecognizer;
@protocol SiriSharedUIContentPlatterViewDelegate, SiriSharedUIContentViewSizeProviding;

@interface SiriSharedUIContentPlatterView : SiriSharedUIStandardView <NSScrollViewDelegate, SiriSharedUIContentPlatterScrollViewDelegate, SiriSharedUIDarkening, SiriSharedUIAccessibilityFocusing>

@property (retain, nonatomic, getter=_scrollView) SiriSharedUIContentPlatterScrollView *scrollView;
@property (retain, nonatomic, getter=_darkenMaskView) SiriSharedUIContentPlatterDarkenMaskView *darkenMaskView;
@property (nonatomic, getter=_platterNeedsLayout, setter=_setPlatterNeedsLayout:) BOOL platterNeedsLayout;
@property (nonatomic, getter=_shouldAllowDismissalWhenScrollable, setter=_setShouldAllowDismissalWhileScrollable:) BOOL shouldAllowDismissalWhileScrollable;
@property (nonatomic, getter=_currentContentOffset, setter=_setCurrentContentOffset:) double currentContentOffset;
@property (retain, nonatomic) SiriSharedUINotificationCenterPlatterView *platterView;
@property (weak, nonatomic) id<SiriSharedUIContentPlatterViewDelegate> delegate;
@property (retain, nonatomic) NSArray *contentViews;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) double heightForContentSeparators;
@property (retain, nonatomic) SiriSharedUIPanDismissalGestureRecognizer *dismissalGestureRecognizer;
@property (weak, nonatomic) id<SiriSharedUIContentViewSizeProviding> contentViewSizeProvider;
@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double darkenIntensity;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didScrollInScrollView:(id)a0;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsLayout:(BOOL)a0;
- (void)setNeedsLayout;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)preferredAccessibilityElementToFocus;
- (void)setOffersDismissal:(BOOL)a0 actionHandler:(id)a1;
- (BOOL)shouldAllowSimultaneousGestureRecognizersForScrollView:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollView:(id)a0;
- (struct CGSize { double x0; double x1; })_contentSizeForScrollView:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForScrollView:(id)a0;
- (id)contentPlatterScrollView;

@end
