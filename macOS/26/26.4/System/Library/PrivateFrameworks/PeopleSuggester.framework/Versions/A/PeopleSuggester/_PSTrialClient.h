@class _PASLock, NSUserDefaults;

@interface _PSTrialClient : NSObject {
    NSUserDefaults *_userDefaults;
    _PASLock *_lock;
}

- (double)doubleForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (unsigned long long)integerForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)containsKey:(id)a0;
- (id)recipe;
- (void)updateFactors;
- (id)mutableDictionaryForKey:(id)a0;
- (BOOL)shouldComputePhotoBasedFeatures;
- (void)updateConfigWithTrialOverrides:(id)a0;
- (id)arrayOfArraysForKey:(id)a0;
- (int)dataCollectionTimeToWaitInSeconds;
- (id)getTrialExperiment;
- (id)loadCoreMLModel:(id)a0 config:(id)a1;
- (double)maxComputationTime;
- (id)mutableDictionaryOfSetsForKey:(id)a0;
- (id)psHeuristicsOverrides;
- (long long)rankAggregationStrategyType;
- (id)rankingModel;
- (double)rrfConstantK;
- (BOOL)shouldActivatePSR;
- (BOOL)shouldEnableDataCollection;
- (BOOL)shouldProcessPicturesLive;
- (BOOL)shouldUseCatalogInference;
- (BOOL)shouldUseVIPModel;
- (id)suggestionProxyOrder;

@end
