@class NSView;

@interface _NSConstraintBasedLayoutHostingView : NSView {
    NSView *_hostedView;
    BOOL _hasAddedConstraints;
}

@property (retain) NSView *hostedView;

+ (BOOL)requiresConstraintBasedLayout;

- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setFrameWithAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })_layoutSizeThatFits:(struct CGSize { double x0; double x1; })a0 fixedAxes:(unsigned long long)a1;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHostedView:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (void)updateConstraints;
- (void)constraintsDidChangeInEngine:(id)a0;
- (void)_layoutMetricsInvalidatedForHostedView;
- (void)dealloc;
- (BOOL)_layoutHeightDependsOnWidth;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void)_informContainerThatSubviewsNeedUpdateConstraints;

@end
