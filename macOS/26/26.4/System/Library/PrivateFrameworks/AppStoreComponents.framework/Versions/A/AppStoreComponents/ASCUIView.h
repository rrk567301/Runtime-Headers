@class NSColor, JUTraitCollection;

@interface ASCUIView : NSView

@property (class, readonly) BOOL areAnimationsEnabled;

@property (nonatomic) BOOL invalidatingParentIntrinsicContentSize;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) double alpha;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (nonatomic) BOOL insetsLayoutMarginsFromSafeArea;
@property (nonatomic) BOOL preservesSuperviewLayoutMargins;
@property (nonatomic) long long semanticContentAttribute;
@property (readonly, nonatomic) long long effectiveUserInterfaceLayoutDirection;
@property (readonly, nonatomic) JUTraitCollection *traitCollection;

+ (void)performWithoutAnimation:(id /* block */)a0;

- (void)setNeedsDisplay;
- (void)layoutIfNeeded;
- (void)updateLayer;
- (BOOL)isOpaque;
- (void)layout;
- (void)didInit;
- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void)setNeedsLayout;
- (BOOL)wantsUpdateLayer;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
