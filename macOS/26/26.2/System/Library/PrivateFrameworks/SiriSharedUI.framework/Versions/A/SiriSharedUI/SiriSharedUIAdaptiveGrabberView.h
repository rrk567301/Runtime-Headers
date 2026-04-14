@interface SiriSharedUIAdaptiveGrabberView : NSControl

@property (nonatomic) long long style;

+ (Class)layerClass;

- (void)_commonInit;
- (id)initWithStyle:(long long)a0;
- (id)shapeLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (struct CGPath { } *)_pathForStyle:(long long)a0;
- (void)_setupWithStyle:(long long)a0 animated:(BOOL)a1;

@end
