@class NSMutableSet, NSString, CLRegion, CLLocationManager, CLLocation, NSObject, NSCondition;
@protocol OS_dispatch_queue, ATXLocationManagerGPSDelegate;

@interface ATXLocationManagerGPSCoreLocation : NSObject <CLLocationManagerDelegate, ATXLocationManagerGPS> {
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_clQueue;
    NSCondition *_updateCondition;
    char _locationEnabled;
    char _preciseLocationEnabled;
    char _updatePending;
    NSMutableSet *_locationBlocksToInvoke;
    NSCondition *_requestStateCondition;
    CLRegion *_regionRequested;
    long long _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<ATXLocationManagerGPSDelegate> delegate;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) char locationEnabled;
@property (readonly, nonatomic) char preciseLocationEnabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)beginMonitoringRegion:(id)a0;
- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (void)_requestStateIfNeededForRegion:(id)a0;
- (id)_existingRegionWithIdentifierOnCLQueue:(id)a0;
- (void)_startUpdateIfNeededWithPreciseLocation:(char)a0;
- (void)_updateConditionAndInvokeLocationBlocks:(id)a0 error:(id)a1;
- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (void)updateLocationWithCompletionHandler:(id /* block */)a0;
- (id)updateLocationWithTimeout:(double)a0 requestPreciseLocation:(char)a1;

@end
