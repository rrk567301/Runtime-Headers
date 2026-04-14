@class LPCaptionButtonPresentationProperties, NSImageView, NSTrackingArea, LPTextViewStyle, LPTextView;

@interface LPSubtitleButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_buttonProperties;
    LPTextViewStyle *_style;
    NSTrackingArea *_trackingArea;
    BOOL _hovered;
    BOOL _pressed;
    LPTextView *_textView;
    NSImageView *_imageView;
}

- (void).cxx_destruct;
- (double)firstBaselineOffsetFromTop;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)buttonPressed:(id)a0;
- (void)sizeToFit;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateBackgroundColor;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (void)_buildSubviewsIfNeeded;
- (id)initWithHost:(id)a0 buttonProperties:(id)a1 style:(id)a2;
- (struct CGSize { double x0; double x1; })_layoutButtonForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;

@end
