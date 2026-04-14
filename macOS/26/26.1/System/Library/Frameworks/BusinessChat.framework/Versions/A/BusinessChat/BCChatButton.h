@class NSImageView, NSTextField, NSView, NSTrackingArea;

@interface BCChatButton : NSControl

@property (nonatomic) long long style;
@property (nonatomic) BOOL isInverted;
@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSTextField *smallLabel;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (retain, nonatomic) NSImageView *iconImageView;
@property (retain, nonatomic) NSView *centeredView;

- (void)layout;
- (void)sizeToFit;
- (void)setEnabled:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)mouseUp:(id)a0;
- (double)firstBaselineOffsetFromTop;
- (void)mouseExited:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setStyle:(long long)a0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)lastBaselineOffsetFromBottom;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
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
