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

- (void)stopUpdatingHeading;
- (void)startUpdatingVehicleHeading;
- (void)setDistanceFilter:(double)a0;
- (void)stopMonitoringForIdentifier:(id)a0;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingHeading;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleSpeed;
- (id)initWithEffectiveBundle:(id)a0;
- (void)setDesiredAccuracy:(double)a0;
- (void)stopUpdatingVehicleHeading;
- (void)_setEffectiveAccuracy:(double)a0;
- (void)locationProviderDidChangeAuthorizationStatus:(id)a0;
- (void)locationProvider:(id)a0 didExitConditionIdentifier:(id)a1;
- (void)locationProvider:(id)a0 didUpdateHeading:(id)a1;
- (id)leechedLocationProvider;
- (void)resetForActiveTileGroupChanged;
- (void)_sharedInit;
- (void)locationProviderDidResumeLocationUpdates:(id)a0;
- (void)startMonitoringForCondition:(id)a0 identifier:(id)a1;
- (void)locationProvider:(id)a0 didUpdateLocation:(id)a1;
- (void)locationProvider:(id)a0 monitoringDidFailForConditionIdentifier:(id)a1 withError:(id)a2;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)a0;
- (double)distanceFilter;
- (void)stopUpdatingLocation;
- (void)locationProviderDidPauseLocationUpdates:(id)a0;
- (void)locationProvider:(id)a0 didChangeCoarseMode:(BOOL)a1;
- (void)locationProvider:(id)a0 didEnterConditionIdentifier:(id)a1;
- (id)coreLocationProvider;
- (void)locationProvider:(id)a0 didReceiveError:(id)a1;
- (double)desiredAccuracy;
- (void).cxx_destruct;

@end
