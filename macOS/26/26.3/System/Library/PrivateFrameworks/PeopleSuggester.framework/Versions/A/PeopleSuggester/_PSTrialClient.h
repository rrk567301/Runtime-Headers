@class _PASLock, NSUserDefaults;

@interface _PSTrialClient : NSObject {
    NSUserDefaults *_userDefaults;
    _PASLock *_lock;
}

- (unsigned long long)integerForKey:(id)a0;
- (BOOL)containsKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)recipe;
- (void).cxx_destruct;
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
- (id)rankingModel;
- (BOOL)shouldActivatePSR;
- (BOOL)shouldEnableDataCollection;
- (BOOL)shouldProcessPicturesLive;
- (BOOL)shouldUseVIPModel;
- (id)suggestionProxyOrder;

@end
