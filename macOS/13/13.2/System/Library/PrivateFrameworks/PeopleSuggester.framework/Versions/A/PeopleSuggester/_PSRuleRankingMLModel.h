@class NSString, MLModel, NSDictionary, MLModelConfiguration, _PSBehaviorRuleFeatureExtraction, NSArray;

@interface _PSRuleRankingMLModel : NSObject

@property (retain) MLModel *mlModel;
@property (retain) NSDictionary *metadata;
@property BOOL isAdaptedModel;
@property (retain) NSDictionary *psConfigForAdaptableModel;
@property (retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration;
@property (nonatomic) BOOL isAdaptedMLModelOK;
@property (retain) NSString *adaptedModelRecipeVersion;
@property (retain) _PSBehaviorRuleFeatureExtraction *feaExtHandle;
@property double scoreThreshold;
@property (retain, nonatomic) NSArray *scores;

- (void).cxx_destruct;
- (BOOL)isAdaptedModelCreated;
- (BOOL)isAdaptedModelUsed;
- (id)initWithMLModel:(id)a0 scoreThreshold:(double)a1 isAdaptedModel:(BOOL)a2 psConfigForAdaptableModel:(id)a3 isAdaptedMLModelOK:(BOOL)a4;
- (id)initWithAdaptableModelConfig:(id)a0 isAdaptedMLModelOK:(BOOL)a1 scoreThreshold:(double)a2;
- (id)getAdaptedModelVersion;
- (void)loadDefaultRuleMinerMLModel;
- (id)extractAdaptedModelRecipeID;
- (id)giveModelDescription;
- (id)scoresOnRules:(id)a0 contextItems:(id)a1;
- (id)rankRules:(id)a0 contextItems:(id)a1;

@end
