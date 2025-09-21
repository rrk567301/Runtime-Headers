@class TRIClient, _OSDayDrainResult, NSNumber, _OSIBLMitigation, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, OS_os_log, _CDLocalContext;

@interface _OSIBLManager : NSObject

@property (retain) _OSIBLMitigation *currentMitigation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *featureStatusQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *managerStartStopQueue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) _OSDayDrainResult *lastPrediction;
@property (retain, nonatomic) NSDate *lastPredictionDate;
@property (retain, nonatomic) NSDate *lastMitigationChangeDate;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) int notifyTestToken;
@property (nonatomic) int notifyToken;
@property (nonatomic) int consoleModeNotifyToken;
@property (nonatomic) BOOL isConsoleModeActive;
@property (nonatomic) BOOL viewfinderIsActive;
@property (nonatomic) long long currentFeatureState;
@property (retain, nonatomic) TRIClient *trialClientOSI;
@property (retain, nonatomic) TRIClient *trialClientPXP;
@property (nonatomic) BOOL trialFeatureEnabled;
@property (nonatomic) BOOL trialMitigationsEnabled;
@property (nonatomic) BOOL trialPerformanceMitigationEnabled;
@property (nonatomic) long long trialPerformanceMitigationOption;
@property (nonatomic) double trialIBLMDrainPredictionThreshold;
@property (nonatomic) double engagementThreshold;
@property (nonatomic) BOOL alreadyStarted;
@property (retain, nonatomic) NSNumber *firstTimeNotificationState;

+ (id)sharedInstance;

- (void)start;
- (id)dateFormatter;
- (id)init;
- (void)handleCallback:(id)a0;
- (void)evaluate;
- (void).cxx_destruct;
- (BOOL)isPluggedIn;
- (void)resetMitigation;
- (BOOL)hasVariationForMedianLevels:(id)a0;
- (void)cancelTask;
- (id)drainResultWithModel:(long long)a0 withError:(id *)a1;
- (void)consoleModeNotificationHandler;
- (id)currentMitigationWithError:(id *)a0;
- (void)handleCLPCTestOverride:(id)a0;
- (void)handleFeatureDisabled;
- (void)handleFeatureEnabled;
- (void)handleFirstTimeNotification;
- (void)handleTestOverride:(id)a0;
- (id)isHighDrainOverAggregatedMedianWithError:(id *)a0;
- (BOOL)isIBLMCurrentlyEnabled;
- (BOOL)isLPMEnabled;
- (id)mitigationWithLevel:(long long)a0;
- (void)notifyMitigationChange:(id)a0;
- (void)overrideAllMitigations:(unsigned long long)a0;
- (void)overrideCLPCMitigations:(unsigned long long)a0;
- (id)predictMitigationLevelWithError:(id *)a0;
- (BOOL)queryAndUpdateCurrentConsoleModeState;
- (void)shadowEvaluateForModels:(id)a0;
- (BOOL)shouldOverrideMitigations;
- (void)submitTask;
- (id)testOverridenMitigation;
- (BOOL)updateFeatureState:(long long)a0 withError:(id *)a1;
- (void)updateMitigationTo:(id)a0;
- (void)updateTrialOSIParameters;
- (void)updateTrialPXPParameters;

@end
