@class NSString, NSArray;

@interface NURenderPipelineFunction : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *parameters;

+ (id)functionWithName:(id)a0 parameters:(id)a1 evaluationBlock:(id /* block */)a2;
+ (id)grainInputSeedFromFrameTime;
+ (id)redEyeSpotsWithCorrectionInfo:(id)a0;
+ (id)scaleMultiplyOfScalar:(double)a0;
+ (id)scaledVector:(id)a0;
+ (id)sharpnessWithIntensity:(double)a0;

- (id)init;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 parameters:(id)a1;
- (BOOL)isEqualToRenderPipelineFunction:(id)a0;
- (id)nu_evaluateWithPipelineState:(id)a0 error:(out id *)a1;

@end
