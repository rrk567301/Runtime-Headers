@class NSString, TRITrackingId, TRIClient, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface PowerUITrialManager : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) TRITrackingId *trialTrackingID;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableArray *updateHandlers;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) TRIClient *trialClient;
@property (retain) NSString *treatmentID;
@property (retain) NSString *experimentID;

- (double)loadTrialDischargeThreshold;
- (double)loadTrialThreshold;
- (id)loadTrialDurationModelByDeletingExistingModel:(BOOL)a0;
- (id)loadTrialDischargeModelByDeletingExistingModel:(BOOL)a0;
- (id)initWithDefaultsDomain:(id)a0;
- (long long)longFactorForName:(id)a0;
- (double)doubleFactorForName:(id)a0;
- (double)loadTrialMinInputChargeDuration;
- (void)loadTrialUpdates;
- (id)factorForName:(id)a0;
- (void)addUpdateHandler:(id /* block */)a0;
- (id)loadModelFromPath:(id)a0 deleteExistingFiles:(BOOL)a1;
- (id)loadTrialEngageModelByDeletingExistingModel:(BOOL)a0;
- (double)loadTrialDesktopModeEntryThreshold;
- (BOOL)useTrialEnabledFeature:(id)a0;
- (double)loadTrialAdjustedHours;
- (id)trialFactor:(id)a0;
- (void).cxx_destruct;

@end
