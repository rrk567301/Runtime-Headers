@class NSString, GEORoadMatcher, NSMutableDictionary, GEOTransitRouteMatcher, NSDate, MNLocation;

@interface MNTransitLocationTracker : MNSteppingLocationTracker <MNLocationManagerObserver> {
    GEOTransitRouteMatcher *_transitRouteMatcher;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    BOOL _hasArrived;
    NSMutableDictionary *_monitoredRegions;
    NSMutableDictionary *_transitRegions;
    NSMutableDictionary *_transitAlerts;
}

@property (nonatomic) BOOL debugSnapToTransitLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)transportType;
- (void)locationManager:(id)a0 didUpdateLocation:(id)a1;
- (void).cxx_destruct;
- (void)stopTracking;
- (void)reroute:(id)a0 reason:(unsigned long long)a1;
- (id)_locationForInaccurateLocation:(id)a0;
- (void)locationManager:(id)a0 monitoringDidFailForRegionIdentifier:(id)a1 withError:(id)a2;
- (id)_correctedLocationForLocation:(id)a0;
- (void)_initRegionAlertsForRoute:(id)a0;
- (BOOL)_isInaccurateLocation:(id)a0;
- (id)_matchedLocationForLocation:(id)a0;
- (id)_roadMatchForOffRouteLocation:(id)a0 routeMatch:(id)a1;
- (void)_startMonitoringTransitAlerts;
- (id)_stepForRegionAlert:(id)a0;
- (void)_stopMonitoringAllRegions;
- (void)_stopMonitoringForRegionWithIdentifier:(id)a0;
- (double)_timeToDisplayStaleGPSLocation;
- (void)_triggerAlertForRegionId:(id)a0;
- (id)initWithNavigationSession:(id)a0;
- (void)locationManager:(id)a0 didEnterConditionIdentifier:(id)a1;
- (void)locationManager:(id)a0 didExitConditionIdentifier:(id)a1;
- (void)startTrackingWithInitialLocation:(id)a0 targetLegIndex:(unsigned long long)a1;

@end
