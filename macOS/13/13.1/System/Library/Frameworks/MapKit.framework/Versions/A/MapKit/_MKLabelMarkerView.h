@class MKMapView;

@interface _MKLabelMarkerView : MKAnnotationView

@property (weak, nonatomic) MKMapView *mapView;

+ (BOOL)_followsTerrain;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setAnnotation:(id)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;
- (BOOL)shouldShowCallout;
- (void)_registerObserver;
- (void)_deregisterObserver;
- (void)_updateAnchorOffset;

@end
