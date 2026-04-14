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

- (double)distanceFilter;
- (void)startMonitoringForRegion:(id)a0;
- (id)initWithEffectiveBundle:(id)a0;
- (void)stopUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (double)desiredAccuracy;
- (void)startUpdatingVehicleSpeed;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)stopUpdatingHeading;
- (void)setDistanceFilter:(double)a0;
- (void)startUpdatingHeading;
- (void)stopUpdatingVehicleHeading;
- (void)stopMonitoringForRegion:(id)a0;
- (void)setDesiredAccuracy:(double)a0;
- (void)stopUpdatingVehicleSpeed;
- (void)locationProvider:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)locationProvider:(id)a0 didEnterRegion:(id)a1;
- (void)locationProviderDidResumeLocationUpdates:(id)a0;
- (void)locationProvider:(id)a0 didUpdateHeading:(id)a1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)a0;
- (void).cxx_destruct;
- (void)resetForActiveTileGroupChanged;
- (void)locationProvider:(id)a0 didExitRegion:(id)a1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)a0;
- (void)_sharedInit;
- (void)locationProvider:(id)a0 didChangeCoarseMode:(BOOL)a1;
- (void)locationProvider:(id)a0 didUpdateLocation:(id)a1;
- (void)locationProvider:(id)a0 didReceiveError:(id)a1;
- (id)coreLocationProvider;
- (id)leechedLocationProvider;
- (void)startUpdatingLocation;
- (void)_setEffectiveAccuracy:(double)a0;
- (void)locationProviderDidPauseLocationUpdates:(id)a0;

@end
