@class NSDictionary, NSString, MLModel, NSArray, PowerUITTEPredParam, NSObject, NSUserDefaults;
@protocol OS_os_log, MLFeatureProvider, _CDLocalContext;

@interface PowerUITTEPredictor : NSObject

@property (retain, nonatomic) PowerUITTEPredParam *ttePredictionParameters;
@property (retain, nonatomic) MLModel *ttePredictionModel;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *predictedFeatureNames;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSDictionary *tteLearningTable;
@property (retain, nonatomic) id<MLFeatureProvider> inputFeatures;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } modelLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } learnTableLock;
@property (nonatomic) int modelType;
@property (nonatomic) long long ttePredictionModelStatus;

- (void).cxx_destruct;
- (void)reset;
- (id)predictedTTEWithStartTimeStamp:(id)a0;
- (id)getModelVersion;
- (id)exportLearnTable;
- (id)fetchLearningTable;
- (void)getInputFeaturesForTTEPrediction:(id)a0;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1;
- (void)loadTTELearningTable;
- (void)loadTTEModelFromBundle:(id)a0;
- (id)predictTTEAt:(id)a0 withReason:(unsigned long long)a1;
- (id)processModelInference:(id)a0;
- (id)runModelInferenceforTTEPrediction;
- (void)updateLearningTable:(id)a0;
- (void)validationLastPredSessionWithValidFlag:(BOOL *)a0 withActiveFlag:(BOOL *)a1;

@end
