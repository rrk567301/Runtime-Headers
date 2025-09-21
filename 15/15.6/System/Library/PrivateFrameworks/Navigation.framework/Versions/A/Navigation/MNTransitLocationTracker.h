@class NSString, GEORoadMatcher, NSMutableDictionary, GEOTransitRouteMatcher, NSDate, MNLocation;

@interface MNTransitLocationTracker : MNSteppingLocationTracker <MNLocationManagerObserver> {
    GEOTransitRouteMatcher *_transitRouteMatcher;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    char _hasArrived;
    NSMutableDictionary *_monitoredRegions;
    NSMutableDictionary *_transitRegions;
    NSMutableDictionary *_transitAlerts;
}

@property (nonatomic) char debugSnapToTransitLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)transportType;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerDidReset:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (char)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)stopTracking;
- (id)_locationForInaccurateLocation:(id)a0;
- (void)reroute:(id)a0 reason:(unsigned long long)a1;
- (id)_clRegionWithCenter:(id)a0 identifier:(id)a1 signalStrength:(int)a2;
- (id)_correctedLocationForLocation:(id)a0;
- (void)_initRegionAlertsForRoute:(id)a0;
- (char)_isInaccurateLocation:(id)a0;
- (id)_matchedLocationForLocation:(id)a0;
- (id)_roadMatchForOffRouteLocation:(id)a0 routeMatch:(id)a1;
- (void)_startMonitoringTransitAlerts;
- (id)_stepForRegionAlert:(id)a0;
- (void)_stopMonitoringAllRegions;
- (void)_stopMonitoringForRegionWithIdentifier:(id)a0;
- (double)_timeToDisplayStaleGPSLocation;
- (void)_triggerAlertForRegionId:(id)a0;
- (id)initWithNavigationSession:(id)a0;
- (void)startTrackingWithInitialLocation:(id)a0 targetLegIndex:(unsigned long long)a1;

@end
