@class NSNumber, NSString, NSURL, NSMutableDictionary, NSDictionary, NSMutableArray, NSUserDefaults, MLModelConfiguration;
@protocol _DKKnowledgeQuerying;

@interface _PSPersonalizationEvaluation : NSObject

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSMutableArray *featureDateForAllShareEvents;
@property (retain, nonatomic) NSMutableArray *featureDateForShareEventsSinceLastAdaptation;
@property (retain, nonatomic) NSMutableDictionary *featureNameDict;
@property (retain, nonatomic) NSMutableArray *featureMatricesForAllShareEvents;
@property (retain, nonatomic) NSMutableArray *sampledFeatureVectors;
@property (retain, nonatomic) NSMutableDictionary *sampledFeatureVectorsForSplits;
@property (retain, nonatomic) NSDictionary *selectedFeaturesConfig;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration;
@property (retain, nonatomic) NSURL *intermediateCompiledModelURL;
@property (retain, nonatomic) NSNumber *trainDataCount;
@property (retain, nonatomic) NSNumber *testDataCount;
@property (retain, nonatomic) NSNumber *batchSize;
@property (retain, nonatomic) NSNumber *topN;
@property (retain, nonatomic) NSNumber *epoc;
@property (retain, nonatomic) NSNumber *evaluationIterationCount;
@property (retain, nonatomic) NSNumber *testSplitPercent;
@property (retain, nonatomic) NSNumber *swapOK;
@property (retain, nonatomic) NSNumber *accuracyGainThresholdForSwap;
@property (retain, nonatomic) NSNumber *engagementRateGainThresholdForSwap;
@property (retain, nonatomic) NSNumber *minimumTestDataSizeForSwap;
@property (retain, nonatomic) NSNumber *numClasses;
@property (retain, nonatomic) NSNumber *numTrees;
@property (retain, nonatomic) NSNumber *maxDepth;
@property (retain, nonatomic) NSNumber *learningRate;
@property (retain, nonatomic) NSNumber *minChildWeight;
@property (retain, nonatomic) NSNumber *recipeID;
@property (retain, nonatomic) NSNumber *minSampleCountForAdaptation;
@property (retain, nonatomic) NSUserDefaults *psAdaptationDefaults;
@property (readonly, nonatomic) NSDictionary *recipe;
@property (retain, nonatomic) NSString *adaptableModelDeployPath;
@property (nonatomic) long long adaptationStrategy;

- (void).cxx_destruct;
- (void)processData;
- (id)loadDefaultModel;
- (id)runAdaptationAndEvaluationWithFeaturesConfigDeployPath:(id)a0 adaptableModelDeployPath:(id)a1;
- (void)setParametersFromRecipe;
- (BOOL)performPrerequisitesBeforeAdaptationWithFeaturesConfigDeployPath:(id)a0;
- (id)loadAdaptableModelUnderDirectory:(id)a0;
- (void)sampleFromDataWithSeed:(int)a0;
- (void)getSamplesWithTestSplitPercentWithSeed:(int)a0;
- (id)updateMLModelWithURL:(id)a0 overDataSplit:(id)a1;
- (id)evaluateClassicMLModel:(id)a0;
- (id)engagementSimulationWithMLModel:(id)a0 mlModelType:(id)a1 labelName:(id)a2;
- (BOOL)cloneAdaptableModel:(id)a0 toFilePath:(id)a1 originalXgboostModelName:(id)a2 clonedXgboostModelName:(id)a3;
- (void)updateAdaptableModelConfigWithUpdateType:(long long)a0 numTrees:(id)a1;
- (unsigned long long)bucketedValue:(unsigned long long)a0;
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)a0 forMLModel:(id)a1;
- (id)createMLFeatureProviderInstanceForMLModelType:(id)a0 forFeatureVector:(id)a1;
- (id)createMLArrayBatchProviderOverDataSplitType:(id)a0 mlModelType:(id)a1;
- (id)measureTestAccuracyOf:(id)a0 againstTrueValuesOf:(id)a1 labelName:(id)a2;
- (void)adaptMLModel:(id)a0 overDataSplit:(id)a1 dataStartingIndex:(long long)a2 dataLength:(long long)a3;
- (id)createMLArrayBatchProviderOverDataSplitType:(id)a0 mlModelType:(id)a1 dataStartingIndex:(long long)a2 dataLength:(long long)a3;
- (void)adaptMLModel:(id)a0 withTrainingData:(id)a1 modelConfiguration:(id)a2;
- (id)initWithRecipe:(id)a0 knowledgeStore:(id)a1;
- (void)setLastDayOfAdaptation:(id)a0;
- (id)runAdaptationAndEvaluation;
- (id)processDataWithQuery:(id)a0;

@end
