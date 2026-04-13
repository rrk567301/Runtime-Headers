@class RTRoutineManager, NSDictionary, CLLocationManager, CLLocation, NSObject, NSString;
@protocol _DKKnowledgeQuerying, OS_os_log, OS_dispatch_semaphore, OS_dispatch_queue, _CDLocalContext;

@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor>

@property (retain, nonatomic) RTRoutineManager *routine;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) int authorizationStatus;
@property (retain) CLLocation *currentLocation;
@property (retain) NSObject<OS_dispatch_semaphore> *requestLocationSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *authorizationSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (retain, nonatomic) NSDictionary *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;
+ (id)monitorWithDelegate:(id)a0 withContext:(id)a1 withKnowledgeStore:(id)a2;

- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (unsigned long long)signalID;
- (id)requiredFullChargeDate;
- (id)lastAcquiredLocation;
- (id)initWithContextStore:(id)a0 withKnowledgeStore:(id)a1;
- (id)predicateForEventsWithinSeconds:(double)a0 aroundTimeOfDay:(id)a1;
- (BOOL)locationIsUncertain:(id)a0;
- (id)longChargesAroundDate:(id)a0;
- (BOOL)longCharges:(id)a0 occurredInLocationsNear:(id)a1 withError:(id *)a2;
- (long long)inKnownMicrolocation;
- (BOOL)isInSameTimeZone;
- (BOOL)inTypicalChargingLocationWithError:(id *)a0;
- (BOOL)notAuthorizedForLocation;
- (id)likelyToBeInKnownArea;

@end
