@class NSDate, NSString, NSTimer, CLLocationManager, NSError, CLLocation, NSMutableArray;

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager>

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSTimer *locationUpdateTimer;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) NSDate *locateStartTime;
@property (nonatomic) char inRequestPreciseLocation;
@property (nonatomic) char firstAuthorizationCallbackArrived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char locationAuthorizationDetermined;
@property (readonly, nonatomic) char locationAuthorizationDenied;
@property (readonly, nonatomic) char preciseLocationAuthorized;
@property (readonly, copy, nonatomic) CLLocation *currentLocation;

+ (id)sharedInstance;
+ (Class)__CLLocationManagerClass;

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_errorHappend:(id)a0;
- (void)_fireCompletionHandlers;
- (void)_locationManagerTimedOut;
- (void)_locationUpdateTimerFired:(id)a0;
- (char)_shouldSendLocation:(id)a0 timeIntervalSinceStart:(double)a1;
- (void)_startLocationUpdateTimerWithAuthorizedHandler:(id /* block */)a0 updateHandler:(id /* block */)a1;
- (void)startUpdatingCurrentLocationWithAuthorizedHandler:(id /* block */)a0 updateHandler:(id /* block */)a1;
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)a0 withAuthorizedHandler:(id /* block */)a1 updateHandler:(id /* block */)a2;

@end
