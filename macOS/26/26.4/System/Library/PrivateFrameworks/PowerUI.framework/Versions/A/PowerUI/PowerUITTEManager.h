@class NSDate, NSString, NSDictionary, PowerUITTEMonitor, NSObject, PowerUITTEPredictor, PowerUITTEPredResults, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue, _CDLocalContext;

@interface PowerUITTEManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSDictionary *stateDescriptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long chargingStatus;
@property long long lastSOCValue;
@property (retain) NSDate *pauseChargingCheckDate;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *unpluggedTimer;
@property unsigned long long currentStatus;
@property (retain) NSDate *lastPluggedInDate;
@property (retain) NSDate *lastUnpluggedDate;
@property (retain, nonatomic) PowerUITTEPredictor *ttePredictor;
@property (retain) PowerUITTEPredResults *ttePredictions;
@property (retain, nonatomic) PowerUITTEMonitor *tteMonitor;
@property float tteInMinutes;
@property (retain) NSString *tteFormatted;
@property float remEnergyDischargeEnd;
@property float correctedPower;
@property (retain, nonatomic) NSDate *lastNotificationTime;
@property (readonly, nonatomic) unsigned long long currentState;

+ (id)log;
+ (id)manager;

- (void)resetState;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)handleCallback:(unsigned long long)a0;
- (void)setTTE:(float)a0;
- (void)updateLearningTableEntry:(id)a0 withTimeBuckets:(id)a1 withPaverage:(float)a2 andHours:(float)a3;
- (void)calculateAndUpdatePaverageOnPluginDetected;
- (void)calculateTTEWithPower:(float)a0;
- (void)changeStateTo:(unsigned long long)a0;
- (void)correctAveragePower:(float)a0;
- (void)formatTTEToRightScale;
- (float)getCorrectedPower;
- (void)handleIsEnabledChangeWithFlag:(BOOL)a0;
- (id)initWithContextStore:(id)a0;
- (BOOL)isEngaged;
- (void)monitorBatteryStateOfChargeChange;
- (void)monitorUnpluggedChange;
- (void)postPredictionNotification;
- (void)postPredictionNotificationWithReason:(id)a0;
- (void)recordDischargeSessionAt:(id)a0;
- (void)resetSessionForTTE;
- (void)updateFeatureEnable;

@end
