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

- (id)initWithDefaultsDomain:(id)a0;
- (id)loadTrialDurationModelByDeletingExistingModel:(BOOL)a0;
- (id)loadTrialDischargeModelByDeletingExistingModel:(BOOL)a0;
- (BOOL)useTrialEnabledFeature:(id)a0;
- (id)factorForName:(id)a0;
- (double)loadTrialMinInputChargeDuration;
- (double)loadTrialThreshold;
- (void).cxx_destruct;
- (double)loadTrialDischargeThreshold;
- (double)loadTrialAdjustedHours;
- (id)loadModelFromPath:(id)a0 deleteExistingFiles:(BOOL)a1;
- (long long)longFactorForName:(id)a0;
- (void)loadTrialUpdates;
- (id)loadTrialEngageModelByDeletingExistingModel:(BOOL)a0;
- (double)loadTrialDesktopModeEntryThreshold;
- (id)trialFactor:(id)a0;
- (void)addUpdateHandler:(id /* block */)a0;
- (double)doubleFactorForName:(id)a0;

@end
