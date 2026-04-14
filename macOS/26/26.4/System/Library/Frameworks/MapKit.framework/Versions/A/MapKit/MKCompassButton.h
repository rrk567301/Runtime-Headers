@class NSView, MKMapView;
@protocol MKCompassView;

@interface MKCompassButton : NSView {
    NSView<MKCompassView> *_compassView;
    BOOL _visible;
    BOOL _listeningForYawUpdateNotifications;
}

@property (nonatomic) long long compassSize;
@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long compassVisibility;

+ (id)compassButtonWithMapView:(id)a0;

- (void)layout;
- (void)setAlphaValue:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)_updateVisibility;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)_isListeningForYawUpdateNotifications;
- (void)_setListeningForYawUpdateNotifications:(BOOL)a0;
- (void)_updateListeningForYawNotifications;
- (void)didTapCompassGesture:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mapView:(id)a1;
- (void)mapViewDidUpdateYawNotification:(id)a0;

@end
