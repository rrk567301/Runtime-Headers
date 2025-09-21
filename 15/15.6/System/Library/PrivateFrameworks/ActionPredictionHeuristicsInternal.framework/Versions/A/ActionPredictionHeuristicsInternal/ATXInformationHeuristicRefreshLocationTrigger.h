@class CLCircularRegion;
@protocol ATXLocationManagerProtocol;

@interface ATXInformationHeuristicRefreshLocationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    id<ATXLocationManagerProtocol> _locationManager;
    CLCircularRegion *_regionToMonitor;
    char _previouslyInsideRegion;
    char _previouslyOutsideRegion;
    id _token;
}

@property (class, readonly) char supportsSecureCoding;

+ (char)_locationIsStaleOrNotAccurateEnough:(id)a0 now:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_run;
- (void)_start;
- (void)_stop;
- (id)initWithEnteringLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radiusInMeters:(double)a1;
- (id)initWithExitingLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radiusInMeters:(double)a1;
- (id)initWithLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 notifyOnEntry:(char)a1 notifyOnExit:(char)a2 radiusInMeters:(double)a3;
- (id)initWithLocationManager:(id)a0 regionToMonitor:(id)a1;
- (void)updateWithInjectedLocationManager:(id)a0;

@end
