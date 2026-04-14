@class NSString, MLModel, MLModelConfiguration, MLModelDescription;

@interface CHSingletonMLModel : NSObject {
    long long _modelUseCount;
    MLModel *_model;
}

@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) NSString *modelKey;

+ (id)modelWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (void)setup;
+ (void)releaseModelWithKey:(id)a0;

- (void).cxx_destruct;
- (id)model;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)incrementUsageCount;
- (long long)usageCount;
- (void)decrementUsageCount;
- (id)initWithMLModel:(id)a0 modelKey:(id)a1;

@end
