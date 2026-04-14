@class NSString, CLPlacemark, CLLocation, CLLocationManager, NSObject;
@protocol OS_dispatch_queue;

@interface APLocationManager : NSObject <CLLocationManagerDelegate> {
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
+ (BOOL)locationEnabledFor:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)initForTesting;
- (id)locationInfo;
- (void)updatePlacemark;
- (BOOL)locationEnabled;

@end
