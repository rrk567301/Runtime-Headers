@interface NUIContentScrollView : NSScrollView

@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) BOOL canScrollDocumentViewHorizontally;
@property (nonatomic) BOOL canScrollDocumentViewVertically;

+ (BOOL)requiresConstraintBasedLayout;

- (id)viewForLastBaselineLayout;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (id)viewForFirstBaselineLayout;
- (BOOL)_layoutHeightDependsOnWidth;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (void)setDocumentView:(id)a0;
- (struct CGSize { double x0; double x1; })_finalSizeForTargetSize:(struct CGSize { double x0; double x1; })a0 resultSize:(struct CGSize { double x0; double x1; })a1 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })_measureSizeForTargetSize:(struct CGSize { double x0; double x1; })a0 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithDocumentView:(id)a0;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;

@end
