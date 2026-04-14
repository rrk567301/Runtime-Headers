@class NSString, CLLocationManager, CLLocation, NSObject, _MonitorState;
@protocol OS_dispatch_queue, CLLocationManagerDelegate;

@interface MapsSuggestionsLimitingLocationManager : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_effectiveLocationManager;
    CLLocationManager *_limitingLocationManager;
    NSObject<OS_dispatch_queue> *_queue;
    id<CLLocationManagerDelegate> _delegate;
    _MonitorState *_locationUpdateState;
    _MonitorState *_visitState;
    _MonitorState *_significantLocationChanges;
}

@property double distanceFilter;
@property double desiredAccuracy;
@property (readonly) BOOL _limitsPrecision;
@property (readonly) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startUpdatingLocation;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)setDelegate:(id)a0;
- (void)stopMonitoringSignificantLocationChanges;
- (void)stopUpdatingLocation;
- (id)initWithEffectiveBundlePath:(id)a0 limitingBundleIdentifier:(id)a1 delegate:(id)a2 onQueue:(id)a3;
- (void)stopMonitoringVisits;
- (void)_fetchPlaceInferencesWithFidelityPolicy:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)startMonitoringVisits;
- (void).cxx_destruct;
- (void)startMonitoringSignificantLocationChanges;
- (void)_startUpdatingLocation;
- (void)_stopUpdatingLocation;
- (void)_startMonitoringSignificantLocationChanges;
- (void)_startMonitoringVisits;
- (void)_stopMonitoringSignificantLocationChanges;
- (void)_stopMonitoringVisits;

@end
