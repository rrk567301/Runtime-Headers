@class NSString, MNCoreLocationProvider;
@protocol MNLocationProviderDelegate;

@interface MNHybridLocationProvider : NSObject <MNLocationProviderDelegate, MNLocationProvider> {
    unsigned long long _mode;
    double _distanceFilter;
    double _nonLeechedDesiredAccuracy;
    double _effectiveAccuracy;
    MNCoreLocationProvider *_coreLocationProvider;
}

@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;

- (void)startUpdatingVehicleHeading;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (void)startMonitoringForRegion:(id)a0;
- (void)resetForActiveTileGroupChanged;
- (void)setDistanceFilter:(double)a0;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (id)leechedLocationProvider;
- (void)stopUpdatingHeading;
- (void)startUpdatingVehicleSpeed;
- (void)startUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopMonitoringForRegion:(id)a0;
- (void)stopUpdatingLocation;
- (id)initWithEffectiveBundle:(id)a0;
- (void)setDesiredAccuracy:(double)a0;
- (id)coreLocationProvider;
- (void)locationProvider:(id)a0 didUpdateLocation:(id)a1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)a0;
- (void)locationProvider:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void).cxx_destruct;
- (void)locationProviderDidPauseLocationUpdates:(id)a0;
- (void)locationProvider:(id)a0 didChangeCoarseMode:(BOOL)a1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)a0;
- (void)_setEffectiveAccuracy:(double)a0;
- (void)locationProvider:(id)a0 didExitRegion:(id)a1;
- (void)locationProviderDidResumeLocationUpdates:(id)a0;
- (void)locationProvider:(id)a0 didReceiveError:(id)a1;
- (void)_sharedInit;
- (void)locationProvider:(id)a0 didEnterRegion:(id)a1;
- (void)locationProvider:(id)a0 didUpdateHeading:(id)a1;

@end
