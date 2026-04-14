@class NSCondition, SSSearchToolModelConfig;

@interface SSUniversalSearchRankerModel : NSObject {
    NSCondition *_condition;
}

@property BOOL loaded;
@property (retain, nonatomic) SSSearchToolModelConfig *modelConfig;

- (void).cxx_destruct;
- (id)init;
- (id)predict:(id)a0;
- (BOOL)loadModel;
- (BOOL)unloadModel;
- (id)generateFeaturesWithFilterTypes:(id)a0 withSourcetypes:(id)a1 withGlobalDomain:(id)a2 withLikelihood:(id)a3 withEntityTypes:(id)a4 withtoolBoxKind:(id)a5;
- (BOOL)loadDictionary;
- (id)rankWithFilterTypes:(id)a0 withSourceTypes:(id)a1 withGlobalDomain:(id)a2 withLikelihood:(id)a3 withEntityTypes:(id)a4 withToolBoxKind:(id)a5;
- (void)updateFeatureDict:(id)a0 arrayFeatureNamePrefix:(id)a1 arrayFeatureValue:(id)a2 featureNames:(id)a3;
- (void)updateFeatureDict:(id)a0 stringFeatureNamePrefix:(id)a1 stringFeatureValue:(id)a2 featureNames:(id)a3;

@end
