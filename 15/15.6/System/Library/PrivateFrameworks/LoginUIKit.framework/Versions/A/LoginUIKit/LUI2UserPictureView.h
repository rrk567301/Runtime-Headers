@class NSImage, NSImageView;

@interface LUI2UserPictureView : LUI2VisualEffectView

@property (retain) NSImageView *imageView;
@property id target;
@property SEL action;
@property (getter=isEnabled) char enabled;
@property (retain) NSImage *image;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)accessibilityLabel;
- (char)accessibilityPerformPress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;

@end
