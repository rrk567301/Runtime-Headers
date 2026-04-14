@class MLModel;

@interface TTE_Model_SeB : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)predictionFromFeatures:(id)a0 completionHandler:(id /* block */)a1;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromX1:(double)a0 x2:(double)a1 x3:(double)a2 x4:(double)a3 x5:(double)a4 x6:(double)a5 x7:(double)a6 x8:(double)a7 x9:(double)a8 error:(id *)a9;

@end
