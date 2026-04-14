@class NSMutableDictionary, NSCondition;

@interface SSSearchToolL2ModelManager : NSObject {
    NSCondition *_condition;
}

@property BOOL loaded;
@property (retain, nonatomic) NSMutableDictionary *modelConfigs;

+ (double)calibrateScore:(double)a0 bundleIDType:(unsigned long long)a1;
+ (BOOL)doesLinkType:(id)a0 matchTokens:(id)a1;
+ (id)populateFeaturesForResults:(id)a0 queryContext:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (BOOL)loadModel;
- (void)unloadModel;
- (void)extractFeatures:(id)a0 providersPerBundle:(id)a1 indicesPerBundle:(id)a2;
- (double)getBucketThresholdForBundleIDType:(unsigned long long)a0;
- (double)getBucketThresholdPerfectScoreForBundleIDType:(unsigned long long)a0;
- (id)getModelName:(unsigned long long)a0;
- (double)getThresholdForBundleIDType:(unsigned long long)a0 thresholdPhotos:(float)a1 thresholdFiles:(float)a2 thresholdSharedLink:(float)a3 isSharedLink:(BOOL)a4 defaulThreshold:(float)a5;
- (BOOL)loadDictionary;
- (BOOL)loadUnitTestDataDict:(id)a0;
- (id)predictFeatures:(id)a0 queryContext:(id)a1;
- (void)predictProcessedFeatures:(id)a0 indicesPerBundle:(id)a1 allResults:(id)a2;
- (void)scoreResults:(id)a0 queryContext:(id)a1;

@end
