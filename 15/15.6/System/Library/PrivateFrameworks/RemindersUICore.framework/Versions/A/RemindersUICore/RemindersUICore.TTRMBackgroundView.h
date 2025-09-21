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

@property (nonatomic, readonly) char opaque;
@property (nonatomic, readonly) char flipped;
@property (nonatomic, readonly) char wantsUpdateLayer;
@property (nonatomic, readonly) char allowsVibrancy;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)isOpaque;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;

@end
