@class NSView, MKMapView;
@protocol MKCompassView;

@interface MKCompassButton : NSView {
    NSView<MKCompassView> *_compassView;
    BOOL _visible;
}

@property (nonatomic) long long compassSize;
@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long compassVisibility;

+ (id)compassButtonWithMapView:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)_updateVisibility;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didTapCompassGesture:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mapView:(id)a1;
- (void)mapViewDidUpdateYawNotification:(id)a0;

@end
