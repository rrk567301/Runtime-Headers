@class NSImageView, LPCollaborationFooterConfiguration, NSView, LPCollaborationFooterStyle, NSTrackingArea, LPTextView;

@interface LPCollaborationFooterView : LPComponentView {
    LPTextView *_optionsView;
    LPTextView *_handleView;
    NSImageView *_indicatorView;
    NSView *_separatorView;
    LPCollaborationFooterConfiguration *_configuration;
    LPCollaborationFooterStyle *_style;
    NSTrackingArea *_trackingArea;
    BOOL _hovered;
    BOOL _pressed;
}

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateBackgroundColor;
- (id)initWithHost:(id)a0;
- (void)updateIndicator;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 configuration:(id)a1 style:(id)a2;
- (struct CGSize { double x0; double x1; })_layoutFooterForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (void)_footerTapRecognized:(id)a0;

@end
