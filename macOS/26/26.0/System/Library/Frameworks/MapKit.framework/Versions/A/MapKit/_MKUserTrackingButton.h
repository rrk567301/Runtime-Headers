@class NSColor, MKMapView, NSButton;

@interface _MKUserTrackingButton : NSView {
    NSButton *_button;
}

@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) BOOL selectsWhenTracking;
@property (nonatomic) unsigned long long controlSize;
@property (retain, nonatomic, getter=_contentTintColor, setter=_setContentTintColor:) NSColor *contentTintColor;

+ (id)buttonWithMapView:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)_updateState;
- (void).cxx_destruct;
- (void)_updateControlSize;
- (void)didReceiveClick:(id)a0;

@end
