@class NSString;
@protocol PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapPinRenderer : NSObject <PXPlacesMapAnnotationRenderer>

@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } minimumEdgeInsets;
@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (id)annotationForGeotaggables:(id)a0 initialCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (char)supportsMoveAnimations;
- (id)viewForAnnotation:(id)a0 andMapView:(id)a1;

@end
