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

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } additionalPadding;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTrackingAreas;
- (void)_updateBackgroundColor;
- (id)initWithHost:(id)a0;
- (void)updateIndicator;
- (void)_footerTapRecognized:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutFooterForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)initWithHost:(id)a0 configuration:(id)a1 style:(id)a2;
- (void)layoutComponentView;

@end
