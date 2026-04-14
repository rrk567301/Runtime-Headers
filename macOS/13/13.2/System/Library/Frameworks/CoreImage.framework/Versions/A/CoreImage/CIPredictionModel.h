@class MLModel, NSString, NSSet;

@interface CIPredictionModel : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } *imageBuffer;
}

@property (retain, nonatomic) MLModel *model;
@property (nonatomic) struct CIPredictionModelImageFeatures { NSString *name; long long width; long long height; unsigned int format; } inputImageFeatures;
@property (nonatomic) struct CIPredictionModelImageFeatures { NSString *name; long long width; long long height; unsigned int format; } outputImageFeatures;
@property (readonly, nonatomic) NSSet *featureNames;

- (void)dealloc;
- (id)featureValueForName:(id)a0;
- (id)initWithModel:(id)a0;
- (BOOL)processInputModel:(id)a0;
- (BOOL)processInputFeatureWithName:(id)a0 featureDescription:(id)a1;
- (BOOL)processOutputFeatureWithName:(id)a0 featureDescription:(id)a1;
- (struct __CVBuffer { } *)predictUsingInputBuffer:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
