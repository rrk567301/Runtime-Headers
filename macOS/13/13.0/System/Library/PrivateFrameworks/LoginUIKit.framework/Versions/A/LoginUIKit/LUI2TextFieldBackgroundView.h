@class LUI2TintView, LUI2DarkenView;

@interface LUI2TextFieldBackgroundView : NSVisualEffectView

@property (retain) LUI2DarkenView *darkenView;
@property (readonly) LUI2TintView *tintView;
@property id mouseUpTarget;
@property SEL mouseUpAction;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)addSubview:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)mouseUp:(id)a0;
- (void)_setupTextFieldBackgroundView;

@end
