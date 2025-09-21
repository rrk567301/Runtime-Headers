@class NSDate, NSString, NSArray, PowerUIBatteryMitigationManager, NSObject, PowerUITrialManager, _OSChargingPredictor, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_queue, _CDLocalContext;

@interface PowerUICECPredictedTimeManager : NSObject <PowerUISignalMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSArray *monitors;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _OSChargingPredictor *pluggedInPredictor;
@property (retain, nonatomic) NSDate *modelDeadline;
@property (retain, nonatomic) NSDate *deadline;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSDate *tModelPredition;
@property (nonatomic) BOOL tBypassSignals;
@property (nonatomic) double predictionLeeway;
@property (retain, nonatomic) PowerUIBatteryMitigationManager *batteryMitigationManager;
@property (readonly, nonatomic) NSString *debugStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithContextStore:(id)a0 withHandler:(id /* block */)a1;

- (void)resetState;
- (void)debug;
- (void)monitor:(id)a0 maySuggestNewFullChargeDeadline:(id)a1;
- (void)stopAllMonitoring;
- (void)startAllMonitoring;
- (void).cxx_destruct;
- (id)deadlineFromMonitors;
- (BOOL)hasSufficientTimeForFullCharge;
- (id)initWithContextStore:(id)a0 withHandler:(id /* block */)a1;
- (double)leewayForConfidence:(double)a0;
- (id)predictedUnplugTime;
- (BOOL)testOverrideForSignalMonitors;
- (id)testingOverrideForPredictedUnplugTime;
- (double)timeToFullChargeFromBatteryLevel:(unsigned long long)a0;

@end
