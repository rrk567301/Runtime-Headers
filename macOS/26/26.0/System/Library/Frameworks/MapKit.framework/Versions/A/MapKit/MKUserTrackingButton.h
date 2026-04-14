@class _MKUserTrackingButton, NSShadow, MKMapView, NSGlassView, NSVisualEffectView, NSColor;

@interface MKUserTrackingButton : NSView {
    _MKUserTrackingButton *_button;
    NSVisualEffectView *_effectView;
    NSShadow *_shadow;
    NSGlassView *_glass;
}

@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, getter=_controlSize, setter=_setControlSize:) unsigned long long controlSize;
@property (retain, nonatomic, getter=_contentTintColor, setter=_setContentTintColor:) NSColor *contentTintColor;
@property (weak, nonatomic) MKMapView *mapView;

+ (id)userTrackingButtonWithMapView:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 button:(id)a1;

@end
