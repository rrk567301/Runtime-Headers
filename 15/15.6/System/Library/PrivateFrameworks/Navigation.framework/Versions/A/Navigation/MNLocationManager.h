@class GEOLocationShifter, NSString, NSHashTable, NSLock, MNLocation, NSDate, NSBundle, CLHeading;
@protocol MNLocationProvider, MNLocationRecorder;

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate> {
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    NSHashTable *_accessRequesters;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    NSLock *_observersLock;
    NSLock *_lastLocationLock;
    MNLocation *_lastLocation;
    GEOLocationShifter *_locationShifter;
    double _expectedGpsUpdateInterval;
    NSDate *_lastUpdatedHeadingDate;
    char _trackingLocation;
    char _trackingHeading;
}

@property (copy, nonatomic) id /* block */ locationCorrector;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (readonly, nonatomic) char isHeadingServicesAvailable;
@property (readonly, nonatomic) CLHeading *heading;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (readonly, nonatomic) char coarseModeEnabled;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) double timeScale;
@property (nonatomic) int headingOrientation;
@property (retain, nonatomic) id<MNLocationRecorder> locationRecorder;
@property (readonly, nonatomic) unsigned long long locationProviderType;
@property (retain, nonatomic) id<MNLocationProvider> locationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLocationManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (void)stop;
- (void)startMonitoringForRegion:(id)a0;
- (void)stopMonitoringForRegion:(id)a0;
- (void)setLastLocation:(id)a0;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;
- (void)startHeadingUpdateWithObserver:(id)a0;
- (void)stopLocationUpdateWithObserver:(id)a0;
- (void)_reportLocationFailureWithError:(id)a0;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)a0;
- (void)_reportLocationSuccess;
- (void)_setTrackingHeading:(char)a0;
- (void)_setTrackingLocation:(char)a0;
- (void)locationProvider:(id)a0 didReceiveError:(id)a1;
- (void)locationProvider:(id)a0 didUpdateHeading:(id)a1;
- (void)locationProvider:(id)a0 didUpdateLocation:(id)a1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)a0;
- (void)locationProviderDidPauseLocationUpdates:(id)a0;
- (void)locationProviderDidResumeLocationUpdates:(id)a0;
- (char)locationProviderShouldPauseLocationUpdates:(id)a0;
- (void)pushLocation:(id)a0;
- (void)startLocationUpdateWithObserver:(id)a0;
- (void)stopHeadingUpdateWithObserver:(id)a0;
- (void)locationProvider:(id)a0 didExitRegion:(id)a1;
- (void)_clearLocationAssertion;
- (void)_createLocationAssertion;
- (char)_hasLocationAssertion;
- (void)_shiftLocationIfNecessary:(id)a0 handler:(id /* block */)a1;
- (void)_updateForNewShiftedLocation:(id)a0 rawLocation:(id)a1;
- (void)addLocationListener:(id)a0;
- (void)locationProvider:(id)a0 didChangeCoarseMode:(char)a1;
- (void)locationProvider:(id)a0 didEnterRegion:(id)a1;
- (void)locationProvider:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)removeLocationAccessFor:(id)a0;
- (void)removeLocationAccessForAll;
- (void)removeLocationListener:(id)a0;
- (void)requestLocationAccessFor:(id)a0;
- (void)setLocationProviderType:(unsigned long long)a0;
- (void)useGPSLocationProviderWithCLParameters:(id)a0;
- (void)useHybridLocationProvider;
- (void)useSimulationLocationProvider:(id)a0;
- (void)useTraceLocationProvider:(id)a0;

@end
