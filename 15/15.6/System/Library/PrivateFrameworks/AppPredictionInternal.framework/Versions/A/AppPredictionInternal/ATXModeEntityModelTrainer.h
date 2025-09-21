@class ATXGlobalWidgetPopularityModel, NSString, ATXGlobalAppModeAffinityModel, ATXModeEntityStore, ATXGlobalInterruptingAppModel;

@interface ATXModeEntityModelTrainer : NSObject {
    NSString *_cacheBasePath;
    ATXModeEntityStore *_modeEntityStore;
    ATXGlobalAppModeAffinityModel *_globalAppModeAffinityModel;
    ATXGlobalInterruptingAppModel *_globalInterruptingAppModel;
    ATXGlobalWidgetPopularityModel *_globalWidgetPopularityModel;
}

+ (id)thresholdedModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1 threshold:(double)a2;
+ (id)eventProviderForMode:(unsigned long long)a0;
+ (id)eventProviderForScorableTime:(id)a0;
+ (double)maxScoreWithThresholdGivenModeEntityScores:(id)a0;
+ (double)scoreThresholdGivenModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)train;
- (char)shouldDeferTrainingDueToUpgrade;
- (id)initWithCacheBasePath:(id)a0 modeEntityStore:(id)a1 globalAppModeAffinityModel:(id)a2 globalInterruptingAppModel:(id)a3 globalWidgetPopularityModel:(id)a4;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (char)persistModeEntityScores:(id)a0 modeEntityTypeIdentifier:(id)a1 modeIdentifier:(id)a2 modeConfigurationType:(long long)a3;
- (char)shouldDeferTrainingDueToRestoredBackup;
- (void)trainWithShouldDeferTrainingOnBackupRestoreOrUpgrade:(char)a0;
- (void)trainWithXPCActivity:(id)a0;
- (void)trainWithXPCActivity:(id)a0 shouldSkipRetrainingIfTrainedRecently:(char)a1 shouldDeferTrainingOnRestoreOrUpgrade:(char)a2;

@end
