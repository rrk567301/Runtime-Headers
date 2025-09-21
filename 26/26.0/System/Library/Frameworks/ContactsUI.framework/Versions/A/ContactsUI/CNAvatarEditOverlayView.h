@class CAGradientLayer, NSImageView, NSTextField;

@interface CNAvatarEditOverlayView : NSView

@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSImageView *arrowImage;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

+ (id)arrowImage;

- (void)updateLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)updateLabelVisibilityForNewSize;
- (id)initWithTitle:(id)a0 font:(id)a1 textColor:(id)a2;

@end
