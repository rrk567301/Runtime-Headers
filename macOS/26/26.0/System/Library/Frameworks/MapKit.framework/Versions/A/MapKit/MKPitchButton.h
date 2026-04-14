@class NSGlassView, NSShadow, MKMapView, NSView, NSVisualEffectView, NSButton, NSColor;

@interface MKPitchButton : NSView {
    long long _state;
    NSButton *_button;
    NSView *_buttonWrapper;
    NSVisualEffectView *_effectView;
    NSShadow *_shadow;
    NSGlassView *_glass;
}

@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long visibility;
@property (nonatomic, getter=_backgroundStyle, setter=_setBackgroundStyle:) unsigned long long backgroundStyle;
@property (nonatomic, getter=_controlSize, setter=_setControlSize:) unsigned long long controlSize;
@property (retain, nonatomic, getter=_contentTintColor, setter=_setContentTintColor:) NSColor *contentTintColor;

+ (id)pitchButtonWithMapView:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)_updateState;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_updateButtonState;
- (void)_performPitchAction:(id)a0;
- (id)_transitionAnimation;
- (void)_updateControlSize;
- (void)_updateHiddenState;
- (id)initWithMapView:(id)a0;

@end
