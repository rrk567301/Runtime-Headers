@class NSString, PowerUITrialManager, MLModel, NSDate, NSObject;
@protocol OS_os_log, _CDLocalContext;

@interface PowerUIDesktopModePredictor : NSObject <PowerUIPredictor>

@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double threshold;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadModelLock;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (readonly, retain, nonatomic) MLModel *model;
@property (retain, nonatomic) NSDate *pluginDate;
@property (nonatomic) double pluginBatteryLevel;
@property (nonatomic) double desktopEntryThreshold;

- (void).cxx_destruct;
- (unsigned long long)modelVersion;
- (id)desktopModelBoltID;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1 withTrialManager:(id)a2;
- (id)inputFeatures:(unsigned long long)a0 withBatteryLevels:(double *)a1;
- (double)loadDesktopModeEntryThreshold;
- (double)loadDischargeThreshold;
- (void)loadTrial;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)a0;
- (unsigned long long)predictorType;
- (id)timeStringFromDate:(id)a0;
- (char)upcomingDeepDischargePredictionWithBatteryLevels:(double *)a0;

@end
