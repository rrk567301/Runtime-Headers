@class NSString, NSMutableArray;

@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation> {
    BOOL _showsPlane;
}

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain) NSMutableArray *viewAddedBlock;
@property (nonatomic) double currentProgress;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } startLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } endLocation;
@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } currentLocation;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAnotation;
+ (struct CLLocationCoordinate2D { double x0; double x1; })geodesicLocationForStartPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a0 endPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a1 positionPercentage:(double)a2;

- (id)init;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (id)makeBackingLayer;
- (void)notifyWhenIsVisibleWithBlock:(id /* block */)a0;
- (id)planeLayer;
- (void)setPlaneImage:(id)a0;
- (void)setShowsPlane:(BOOL)a0;
- (void)setStartLatitude:(double)a0 startLongitude:(double)a1 endLatitude:(double)a2 endLongitude:(double)a3;
- (BOOL)showsPlane;

@end
