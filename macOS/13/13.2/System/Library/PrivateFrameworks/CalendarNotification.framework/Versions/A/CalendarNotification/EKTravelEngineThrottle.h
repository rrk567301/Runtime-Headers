@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface EKTravelEngineThrottle : NSObject

@property (nonatomic) BOOL running;
@property (retain, nonatomic) NSString *throttleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *throttleQueue;
@property (retain, nonatomic) NSDate *nextEmissionDate;
@property (retain) NSString *eventExternalURL;
@property (copy, nonatomic) id /* block */ requestHypothesisRefreshBlock;
@property (copy, nonatomic) id /* block */ cancelHypothesisRequestRefreshBlock;
@property (copy, nonatomic) id /* block */ emissionBlock;

+ (double)_requestHypothesisRefreshInterval;
+ (double)emissionThresholdTimeInterval;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (void)receivedAlarmNamed:(id)a0;
- (void)_significantTimeChangeNotificationReceived;
- (id)alarmName;
- (void)updatePredictedDepartureDate:(id)a0;
- (void)_updateEmissionDate:(id)a0;
- (void)_fireEmissionBlock;
- (void)_createEmissionTimerWithDate:(id)a0;
- (void)_uninstallEmissionTimer;
- (void)_emissionTimerFired;
- (void)_registerForNotificationObservation;

@end
