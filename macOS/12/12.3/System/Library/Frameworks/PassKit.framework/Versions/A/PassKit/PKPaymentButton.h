@class CAFilter, CAShapeLayer;

@interface PKPaymentButton : NSButton {
    CAShapeLayer *_layer;
    CAFilter *_highlightFilter;
    BOOL _highlighted;
}

@property (nonatomic) long long type;
@property (nonatomic) long long style;
@property (nonatomic) double cornerRadius;

+ (Class)layerClass;
+ (id)buttonWithType:(long long)a0 style:(long long)a1;
+ (id)titleForType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)setHighlighted:(BOOL)a0;
- (void)mouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (void)_createHighlightFilterIfNecessary;
- (id)initWithPaymentButtonType:(long long)a0 paymentButtonStyle:(long long)a1;
- (void)applyAccessibilityValues;
- (long long)_effectiveButtonStyle;

@end
