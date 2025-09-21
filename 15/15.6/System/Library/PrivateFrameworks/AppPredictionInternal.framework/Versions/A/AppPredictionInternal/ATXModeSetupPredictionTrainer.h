@class NSString;

@interface ATXModeSetupPredictionTrainer : NSObject {
    NSString *_cacheBasePath;
    char _modeIsEligibleForSetupPrediction;
}

- (id)init;
- (void).cxx_destruct;
- (void)train;
- (id)initWithCacheBasePath:(id)a0;
- (char)modeIsCurrentlyCreated:(unsigned long long)a0;
- (char)modeIsEligibleForSetupPrediction:(unsigned long long)a0;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1;
- (id)pathForModeSetupPredictionCacheWithDirectory:(id)a0;
- (void)persistPredictionScores:(id)a0;
- (char)trainSetupPredictionIfModeAffinityWasTrainedRecentlyForMode:(unsigned long long)a0;
- (void)trainWithXPCActivity:(id)a0;
- (void)trainWithXPCActivity:(id)a0 shouldSkipRetrainingIfTrainedRecently:(char)a1 shouldSkipEligiblilityCheckForSetupPrediction:(char)a2;

@end
