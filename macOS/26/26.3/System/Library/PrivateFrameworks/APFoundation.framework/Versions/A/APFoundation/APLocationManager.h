@class NSString, CLPlacemark, CLLocation, CLLocationManager, NSObject;
@protocol OS_dispatch_queue;

@interface APLocationManager : NSObject <CLLocationManagerDelegate, APLocationManaging> {
    NSObject<OS_dispatch_queue> *_locationQueue;
}

@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property BOOL updatingPlacemark;
@property (nonatomic) BOOL isLocationUpdating;
@property (nonatomic) BOOL isLocationInitialized;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) int callerStatus;
@property (retain) CLPlacemark *currentPlacemark;
@property (retain, nonatomic) CLLocation *lastPlacemarkLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_authorizationChangedBlocks;
+ (void)addAuthorizationChangedBlock:(id /* block */)a0;
+ (BOOL)locationEnabledFor:(int)a0;
+ (id)createReverseGeocoder;
+ (void)removeAuthorizationChangedBlocks;
+ (BOOL)canReverseGeocodeLocation:(id)a0;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)start;
- (void)stop;
- (id)locationInfo;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (BOOL)locationEnabled;
- (id)init;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)initForTesting;
- (void).cxx_destruct;
- (id)locationQueue;
- (void)updatePlacemark;

@end
