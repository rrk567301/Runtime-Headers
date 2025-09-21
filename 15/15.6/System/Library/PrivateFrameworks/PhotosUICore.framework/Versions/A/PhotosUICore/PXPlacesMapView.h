@class NSString, PXObservable;
@protocol PXPlacesMapViewDelegate;

@interface PXPlacesMapView : MKMapView <MKMapViewDelegate> {
    double _currentScale;
}

@property (weak, nonatomic) id<PXPlacesMapViewDelegate> mapViewDelegate;
@property (nonatomic) double pitch;
@property (readonly, nonatomic) char px_isPitched;
@property (readonly, nonatomic) PXObservable *observable;
@property (nonatomic) char userInteractionEnabled;
@property (nonatomic) long long panningGestureMinimumNumberOfTouches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })MKMapRectForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })canonicalMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForNearbyQueriesFromRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 atScale:(double)a1 targetViewSize:(struct CGSize { double x0; double x1; })a2;
+ (id)mapViewWithMarkedLocation:(id)a0 regionRadius:(double)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (void)_commonInit;
- (char)acceptsFirstResponder;
- (void)awakeFromNib;
- (void)cancelOperation:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mapView:(id)a0 canEnter3DModeDidChange:(char)a1;
- (void)mapView:(id)a0 didAddAnnotationViews:(id)a1;
- (void)mapView:(id)a0 didBecomePitched:(char)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(char)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapViewDidFinishLoadingMap:(id)a0;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(char)a1;
- (void)mapViewWillStartLocatingUser:(id)a0;
- (void)setPreferredConfiguration:(id)a0;
- (id)currentViewPort;
- (void)deselectAllAnnotationsAnimated:(char)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })ppt_cityMapRect;
- (double)_px_zoomLevel;
- (double)_radiansFromDegrees:(double)a0;
- (double)_sampleMapDistanceFromViewPoint:(struct CGPoint { double x0; double x1; })a0 toViewPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)currentViewPortWithThumbnailOverscan;
- (void)ppt_performPlacesScrollTest:(id)a0 iterations:(long long)a1 screenDelta:(long long)a2 delay:(double)a3 completion:(id /* block */)a4;
- (void)ppt_performPlacesZoomTest:(id)a0 iterations:(long long)a1 delay:(double)a2 completion:(id /* block */)a3;
- (id /* block */)ppt_visibleMapRectBlockForQueue:(id)a0 delay:(double)a1;

@end
