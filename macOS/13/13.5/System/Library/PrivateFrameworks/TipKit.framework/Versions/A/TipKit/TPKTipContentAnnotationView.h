@class TPKTipContentAnnotationBubbleView;

@interface TPKTipContentAnnotationView : TPKContentView {
    void /* unknown type, empty encoding */ sourceType;
    void /* unknown type, empty encoding */ sourceView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bubbleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_arrowDirection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostingRect;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sourceCenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostingViewNeedsReset;
}

@property (nonatomic, retain) TPKTipContentAnnotationBubbleView *bubbleView;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic, weak) void /* unknown type, empty encoding */ closeButtonTopConstraint;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)updateConstraints;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)deviceOrientationDidChange:(id)a0;
- (void)closeButtonTapped:(id)a0;
- (void)annotationViewNeedsLayout;
- (id)initWithContentController:(id)a0 tipContent:(id)a1 sourceView:(id)a2;
- (id)initWithController:(id)a0 content:(id)a1;
- (id)initWithReusableTipView:(id)a0;
- (void)resetHostingView;
- (void)setupAppKit;
- (void)updateCloseButtonConstraints;
- (void)updateContentBackgroundColor:(id)a0;

@end
