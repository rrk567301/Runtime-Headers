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

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)sharedInstance;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)showLocationArrow;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)cleanUpPendingLOIBlocks;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (BOOL)loadCoreRoutine;
- (id)mobileWiFiLocationManager;
- (void)dealloc;
- (void)callPendingLOIBlocksWithCLLocation:(id)a0 LOI:(id)a1 andError:(id)a2;
- (long long)preflightFrameworks;
- (id)rtLOITypeToString:(long long)a0;
- (id)init;
- (void)unloadFrameworks;
- (unsigned long long)addPendingLOIBlocks:(id /* block */)a0;
- (void)fetchCurrentLocationLOIOnQueue:(id)a0 desiredAccuracy:(double)a1 reply:(id /* block */)a2;
- (BOOL)loadCoreLocation;
- (void)determineIfLocationOfInterestIsKnownOfType:(long long)a0 queue:(id)a1 reply:(id /* block */)a2;
- (BOOL)authorizedToUseCoreRoutine;
- (void).cxx_destruct;

@end
