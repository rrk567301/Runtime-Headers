@class NSImage, NSImageView;

@interface LUI2UserPictureView : LUI2VisualEffectView

@property (retain) NSImageView *imageView;
@property id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property (retain) NSImage *image;

- (void)_commonInit;
- (id)accessibilityLabel;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (BOOL)accessibilityPerformPress;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
