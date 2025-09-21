@class NSUUID, MLModel;

@interface CRTextDetectorModelV3CoreML : NSObject

@property (retain) NSUUID *owner;
@property (readonly, nonatomic) MLModel *model;

+ (id)defaultURLOfModelInThisBundle;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 owner:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 owner:(id)a2 error:(id *)a3;
- (id)initWithContentsOfURL:(id)a0 owner:(id)a1 error:(id *)a2;
- (id)predictionFromImage:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
