@class PCPersistentTimer, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface EKTravelEngineThrottle : NSObject

@property (nonatomic) BOOL running;
@property (retain, nonatomic) NSString *throttleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *throttleQueue;
@property (retain, nonatomic) NSDate *nextEmissionDate;
@property (retain, nonatomic) PCPersistentTimer *emissionTimer;
@property (retain) NSString *eventExternalURL;
@property (copy, nonatomic) id /* block */ requestHypothesisRefreshBlock;
@property (copy, nonatomic) id /* block */ cancelHypothesisRequestRefreshBlock;
@property (copy, nonatomic) id /* block */ emissionBlock;

+ (double)emissionThresholdTimeInterval;
+ (double)_requestHypothesisRefreshInterval;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (void)updatePredictedDepartureDate:(id)a0;
- (void)handleBTAJob:(id)a0 named:(const char *)a1;
- (void)_registerForNotificationObservation;
- (void)_unregisterForNotificationObservation;
- (id)btaJobName;
- (void)_significantTimeChangeNotificationReceived;
- (void)_uninstallEmissionTimer;
- (void)_fireEmissionBlock;
- (void)_updateEmissionDate:(id)a0;
- (void)_emissionTimerFired:(id)a0;
- (void)_createEmissionTimerWithDate:(id)a0;

@end
