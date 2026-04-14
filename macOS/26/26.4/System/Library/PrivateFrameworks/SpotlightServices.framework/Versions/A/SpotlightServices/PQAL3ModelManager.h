@class NSCondition, SSSearchToolModelConfig;

@interface PQAL3ModelManager : NSObject {
    NSCondition *_condition;
}

@property BOOL loaded;
@property (retain, nonatomic) SSSearchToolModelConfig *modelConfig;

+ (id)bundleIdTypeMap;
+ (id)inferredIntentToIndexDictionary;
+ (id)eligibleBundleId;
+ (id)intentToIndexDictionary;

- (void).cxx_destruct;
- (id)init;
- (id)predict:(id)a0;
- (BOOL)loadModel;
- (void)unloadModel;
- (double)calibrate:(double)a0;
- (id)generateFeatures:(id)a0 queryContext:(id)a1 eventSearchIntent:(BOOL)a2;
- (float)getBucketThreshold;
- (id)getInferredIntent:(unsigned long long)a0;
- (id)getIntent:(unsigned long long)a0;
- (id)getItemBundleId:(unsigned long long)a0;
- (BOOL)loadDictionary;
- (BOOL)loadUnitTestDataDict:(id)a0;
- (void)predictProcessedFeatures:(id)a0 indices:(id)a1 allResults:(id)a2;
- (void)scoreResults:(id)a0 queryContext:(id)a1 eventSearchIntent:(BOOL)a2;

@end
