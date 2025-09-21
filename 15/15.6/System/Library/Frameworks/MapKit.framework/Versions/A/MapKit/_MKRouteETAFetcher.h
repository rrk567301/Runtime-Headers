@class MKDirections, GEOAutomobileOptions, NSMutableDictionary, GEOCyclingOptions, GEOWalkingOptions, GEOTransitOptions, MKMapItem;

@interface _MKRouteETAFetcher : NSObject {
    struct CLLocationCoordinate2D { double latitude; double longitude; } _lastUpdatedETAOriginCoordinate;
    double _lastUpdatedETATime;
    double _lastRequestTime;
    MKDirections *_inProgressETAUpdate;
    char _lastETAUpdateHadError;
    double _staleDistance;
    double _staleTimeInterval;
    char _optionsHaveChangedSinceLastUpdate;
}

@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (copy, nonatomic) GEOWalkingOptions *walkingOptions;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (copy, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKMapItem *originMapItem;
@property (readonly, nonatomic) NSMutableDictionary *etaResults;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } originCoordinate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } destinationCoordinate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_resetState;
- (char)isUsingCurrentLocationForOrigin;
- (void)_didUpdateETAResult;
- (void)expireETAsIfNoLongerValid;
- (void)invalidateETAForTransportType:(unsigned long long)a0;
- (char)isValidETA:(id)a0;
- (void)requestNewETAForTransportType:(unsigned long long)a0 additionalTransportTypes:(id)a1 completion:(id /* block */)a2;
- (id)routeETAForTransportType:(unsigned long long)a0;
- (char)shouldUpdateEstimatedTravelTimeForNewOrigin:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
