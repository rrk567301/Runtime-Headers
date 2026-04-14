@class NSString, NSBundle, CLLocationManager, CLLocation, geo_isolater, NSObject;
@protocol OS_dispatch_queue, MKLocationProviderDelegate;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, MKLocationProvider> {
    CLLocationManager *_clLocationManager;
    BOOL _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    long long _accuracyAuthorization;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    id /* block */ _authorizationRequestBlock;
    BOOL _waitingForAuthorization;
    BOOL _hasQueriedAuthorization;
    geo_isolater *_isolation;
    NSObject<OS_dispatch_queue> *_coreLocationQueue;
    double _desiredAccuracy;
    double _distanceFilter;
    BOOL _hasExternallyProvidedLocationManager;
}

@property (readonly, nonatomic) CLLocationManager *_clLocationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property (nonatomic) double distanceFilter;
@property (nonatomic) BOOL matchInfoEnabled;
@property (nonatomic) BOOL fusionInfoEnabled;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, nonatomic) long long accuracyAuthorization;
@property (readonly, nonatomic) BOOL usesCLMapCorrection;
@property (readonly, nonatomic) BOOL shouldShiftIfNecessary;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) double timeScale;
@property (readonly, nonatomic) CLLocation *lastLocation;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)activityType;
- (void)setActivityType:(long long)a0;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didUpdateToLocation:(id)a1 fromLocation:(id)a2;
- (void)setHeadingOrientation:(int)a0;
- (int)headingOrientation;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)dismissHeadingCalibrationDisplay;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (id)initWithCLLocationManager:(id)a0;
- (void)authorizationStatusOnQueue:(id)a0 result:(id /* block */)a1;
- (void)accuracyAuthorizationOnQueue:(id)a0 result:(id /* block */)a1;
- (void)_createCLLocationManager;
- (void)_updateAccuracyAuthorizationOnQueue:(id)a0;
- (void)_updateAuthorizationStatus;
- (void)_resetForNewEffectiveBundle;
- (int)_authorizationStatusOnQueue;
- (long long)_accuracyAuthorizationOnQueue;
- (void)setAuthorizationRequestBlock:(id /* block */)a0;
- (id /* block */)authorizationRequestBlock;

@end
