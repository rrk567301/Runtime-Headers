@interface SiriSharedUIAdaptiveGrabberView : NSControl

@property (nonatomic) long long style;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyle:(long long)a0;
- (BOOL)wantsLayer;
- (BOOL)isFlipped;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)shapeLayer;
- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (void)_setupWithStyle:(long long)a0 animated:(BOOL)a1;
- (struct CGPath { } *)_pathForStyle:(long long)a0;

@end
