@class NSImageView, NSTextField, NSView, NSTrackingArea;

@interface BCChatButton : NSControl

@property (nonatomic) long long style;
@property (nonatomic) BOOL isInverted;
@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSTextField *smallLabel;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (retain, nonatomic) NSImageView *iconImageView;
@property (retain, nonatomic) NSView *centeredView;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)layout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyle:(long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)sizeToFit;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (void)drawFocusRingMask;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (void)setup;
- (void)_setStyle:(long long)a0;
- (void)createSubviews;
- (void)updateAppearanceForState:(long long)a0;
- (void)setAccessibilityValues;
- (struct CGSize { double x0; double x1; })calculateButtonLayout;
- (id)color:(struct BCColor { double x0; double x1; double x2; double x3; })a0;
- (void)updateButtonLayout;
- (void)setTextForLabel:(id)a0 label:(id)a1;
- (void)setOpacityForView:(id)a0 opacity:(double)a1;

@end
