@class NSDictionary, NSArray;

@interface FidesPHSEvaluatorDataSource : NSObject

@property (copy, nonatomic) NSDictionary *recipe;
@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordInfos;
@property (retain, nonatomic) NSArray *recordDatas;
@property (readonly, nonatomic) NSArray *GBDTQuestions;
@property (readonly, nonatomic) char computeFirstOrderGradients;
@property (readonly, nonatomic) char computeSecondOrderGradients;
@property (readonly, nonatomic) char reportGradientsBothSidesOfSplit;
@property (readonly, nonatomic) char reportNodeSumGradients;
@property (readonly, nonatomic) char reportPerFeatureResultDifference;
@property (readonly, nonatomic) char reportPerNodeResultDifference;
@property (readonly, nonatomic) NSArray *weightVector;
@property (readonly, nonatomic) NSArray *translateVector;
@property (readonly, nonatomic) NSArray *inputVectors;
@property (readonly, nonatomic) NSArray *targetVector;

+ (void)initialize;
+ (id)defaultRecipeParams;

- (void).cxx_destruct;
- (int)batchSize;
- (float)learningRate;
- (id)labelMap;
- (id)classLearningRates;
- (int)classThreshold;
- (id)freezeComponents;
- (float)gradNormFactor;
- (id)gradNormType;
- (id)initWithRecipe:(id)a0 inputVectors:(id)a1 targetVector:(id)a2 error:(id *)a3;
- (id)inputSplice;
- (float)l2NormBound;
- (id)layersToTrain;
- (float)learningRateDecay;
- (int)numLocalIterations;
- (id)objectiveFunction;

@end
