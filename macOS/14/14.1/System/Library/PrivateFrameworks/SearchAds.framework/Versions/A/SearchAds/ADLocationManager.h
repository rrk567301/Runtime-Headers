@class NSObject, NSString, CLLocationManager, CLLocation, NSMutableArray, CLPlacemark;
@protocol OS_dispatch_queue;

@interface ADLocationManager : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_locationQueue;
}

@property (retain, nonatomic) NSMutableArray *listeners;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property BOOL updatingPlacemark;
@property (nonatomic) BOOL isLocationUpdating;
@property (nonatomic) BOOL isLocationInitialized;
@property (retain, nonatomic) CLLocation *actualLocation;
@property (nonatomic) int callerStatus;
@property (retain) CLPlacemark *currentPlacemark;
@property (retain, nonatomic) CLLocation *lastPlacemarkLocation;
@property (readonly, nonatomic) BOOL isLocationAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)addListener:(id)a0;
- (id)currentLocation;
- (void)updatePlacemark;
- (BOOL)locationEnabledFor:(int)a0;
- (id)obfuscatedLocation;

@end
