@class PowerUIChargingController, PowerUICECGridDataManager, NSDictionary, NSString, NSDate, NSObject, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue, _CDLocalContext;

@interface PowerUIDemoCECManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSDictionary *phaseDescriptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long currentPhase;
@property (nonatomic) char isChargingPaused;
@property (nonatomic) char isDemoCECEnabled;
@property (retain, nonatomic) NSDate *pauseChargingCheckDate;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) PowerUIChargingController *chargingController;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) NSDate *lastPluggedInDate;
@property (retain, nonatomic) NSDate *lastEngagementCheckDate;
@property (nonatomic) long long pluggedInBatteryLevel;
@property (retain, nonatomic) PowerUICECGridDataManager *gridDataManager;
@property (readonly, nonatomic) NSString *debugStatus;
@property (nonatomic) char isInternal;

+ (id)manager;
+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (char)isEnabled;
- (void)resetState;
- (void)loadState;
- (void)handleCallback:(id)a0;
- (void)recordAnalytics;
- (id)chargeHistoryAnalytics;
- (void)clearAnalytics;
- (unsigned long long)demoCecState;
- (char)evaluateEngagement;
- (void)evaluateShouldChargeNow;
- (void)handleDisengagement;
- (void)handleEmergencyCharge;
- (void)handleEngagement;
- (void)handlePauseChargingAboveMaxSOC;
- (void)handlePowerUICECStateChange:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (id)initWithContextStore:(id)a0;
- (char)isEngaged;
- (void)loadStateFromDefaults;
- (void)monitorBatteryNotifications;
- (void)monitorBatteryStateOfChargeChange;
- (void)monitorPluggedInChange;
- (void)recordChargingStateChange:(char)a0 atBatteryLevel:(long long)a1 duringCleanInterval:(char)a2;
- (void)recordEngagementEvaluation:(char)a0;
- (void)registerTimer;
- (void)registerTimer:(id)a0 afterTime:(double)a1 withInterval:(double)a2;
- (id)sessionEndCECAnalytics;
- (void)setEnabledState:(char)a0;
- (char)shouldEngageDemoCEC;
- (char)shouldReevaluateEngagement;
- (void)unregisterTimer:(id)a0;
- (void)updatePhaseFrom:(unsigned long long)a0 to:(unsigned long long)a1;

@end
