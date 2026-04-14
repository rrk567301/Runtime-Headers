@class NSMutableDictionary, NSDictionary, _DKKnowledgeStore, NSString, NSMutableArray, FidesPHSEvaluatorDataSource;

@interface LighthouseShareSheetPFLTraining : NSObject

@property (retain, nonatomic) _DKKnowledgeStore *knowledgeStore;
@property (retain, nonatomic) FidesPHSEvaluatorDataSource *dataSource;
@property (retain, nonatomic) NSDictionary *processDataReturnDict;
@property (retain, nonatomic) NSMutableArray *featureMatricesForAllShareEvents;
@property (retain, nonatomic) NSMutableDictionary *featureNameDict;
@property (retain, nonatomic) NSDictionary *selectedFeaturesConfig;
@property (retain, nonatomic) NSString *configTreeSpecification;
@property (retain, nonatomic) NSString *configDepthSpecification;
@property (retain, nonatomic) NSString *configBoltTaskIDSpecification;

+ (void)initialize;
+ (id)taskResultFromDict:(id)a0;
+ (id)processDataForStore:(id)a0 taskParameters:(id)a1;
+ (id)processDataForStore:(id)a0 recipeInfo:(id)a1;

- (void).cxx_destruct;
- (float)sigmoid:(float)a0;
- (id)runWithRecipeInfo:(id)a0 knowledgeStore:(id)a1 error:(id *)a2;
- (id)runTask:(id)a0 knowledgeStore:(id)a1 error:(id *)a2;
- (id)generateResultsDictionayWithModelURL:(id)a0 error:(id *)a1;
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)a0;
- (id)evaluateMetricsWithModelURL:(id)a0;
- (void)processDataForMetricEvaluationForStore:(id)a0;
- (id)createDataSourceForRecipe:(id)a0 error:(id *)a1;
- (id)createDataSourceForDodMLRecipe:(id)a0 error:(id *)a1;

@end
