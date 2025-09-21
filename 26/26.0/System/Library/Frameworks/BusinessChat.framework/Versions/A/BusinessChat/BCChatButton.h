@class NSImageView, NSTextField, NSView, NSTrackingArea;

@interface BCChatButton : NSControl

@property (nonatomic) long long style;
@property (nonatomic) BOOL isInverted;
@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSTextField *smallLabel;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (retain, nonatomic) NSImageView *iconImageView;
@property (retain, nonatomic) NSView *centeredView;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (void)updateTrackingAreas;
- (id)initWithCoder:(id)a0;
- (void)sizeToFit;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)_setStyle:(long long)a0;
- (BOOL)acceptsFirstResponder;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calculateButtonLayout;
- (id)color:(struct BCColor { double x0; double x1; double x2; double x3; })a0;
- (void)createSubviews;
- (void)setAccessibilityValues;
- (void)setOpacityForView:(id)a0 opacity:(double)a1;
- (void)setTextForLabel:(id)a0 label:(id)a1;
- (void)updateAppearanceForState:(long long)a0;
- (void)updateButtonLayout;

@end
