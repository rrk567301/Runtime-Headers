@interface RemindersUICore.TTRMBackgroundView : NSView {
    void /* unknown type, empty encoding */ backgroundFillColor;
    void /* unknown type, empty encoding */ borderWidth;
    void /* unknown type, empty encoding */ borderColor;
    void /* unknown type, empty encoding */ continuousCorners;
    void /* unknown type, empty encoding */ wantsVibrancy;
    void /* unknown type, empty encoding */ roundedCorners;
    void /* unknown type, empty encoding */ customCornerRadius;
    void /* unknown type, empty encoding */ visualEffectView;
}

@property (nonatomic, readonly) BOOL opaque;
@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic, readonly) BOOL allowsVibrancy;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)updateLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })_layoutSizeThatFits:(struct CGSize { double x0; double x1; })a0 fixedAxes:(unsigned long long)a1;

@end
