@class NSObject, NSArray, NSString, RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LocationStateRelay : NSObject <CLLocationManagerDelegate> {
    void *coreLocationDyLibHandle;
    void *coreRoutineDyLibHandle;
    RTRoutineManager *routineManager;
    NSBundle *mobileWiFiBundle;
    CLLocationManager *mobileWiFiLocationManager;
    Class CLLocationManagerClassRef;
    NSMutableDictionary *pendingLOIBlocks;
    NSObject<OS_dispatch_source> *locationRequestTimer;
    void /* function */ *clCopyTechnologiesInUseFunc;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain) NSArray *allLOIs;
@property (nonatomic) BOOL gpsInUse;
@property (nonatomic) BOOL LOIUseAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)determineIfLocationOfInterestIsKnownOfType:(long long)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)showLocationArrow;
- (long long)preflightFrameworks;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)callPendingLOIBlocksWithCLLocation:(id)a0 LOI:(id)a1 andError:(id)a2;
- (BOOL)loadCoreLocation;
- (void)unloadFrameworks;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (unsigned long long)addPendingLOIBlocks:(id /* block */)a0;
- (id)mobileWiFiLocationManager;
- (BOOL)loadCoreRoutine;
- (void)dealloc;
- (void)fetchCurrentLocationLOIOnQueue:(id)a0 desiredAccuracy:(double)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)authorizedToUseCoreRoutine;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)rtLOITypeToString:(long long)a0;
- (void)cleanUpPendingLOIBlocks;
- (id)init;

@end
