@class NSString, CLLocation, VKCustomFeature;

@interface MKPointAnnotation : MKShape <MKGeoJSONObject, MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate> {
    VKCustomFeature *_customFeature;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long representation;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) char showsBalloonCallout;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (id)annotation;
- (char)isPersistent;
- (id)feature;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)_initWithGeoJSONObject:(id)a0 error:(id *)a1;
- (void)_invalidateCachedCoordinate;
- (char)_isPendingSelectionAnimated;
- (void)_setHiddenForOffscreen:(char)a0;
- (char)_shouldDeselectWhenDragged;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 title:(id)a1 subtitle:(id)a2;
- (void)setShowsBalloonCallout:(char)a0;
- (char)shouldRepresentSelf;
- (id)viewRepresentation;

@end
