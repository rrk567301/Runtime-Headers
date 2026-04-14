@class MLModel;

@interface SfC : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;

- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)init;
- (void)predictionFromFeatures:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithMLModel:(id)a0;
- (id)thresholdFromProbs:(id)a0 preds:(id)a1;

@end
