@class ANSTPixelBufferDescriptor;

@interface ANSTExclaveAlgorithm : ANSTAlgorithm

@property (readonly, nonatomic) ANSTPixelBufferDescriptor *networkInputImageDescriptor;

+ (id)new;
+ (Class)_concreteClassOfVersion:(unsigned long long)a0;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (BOOL)bindNetworkInputPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)executeInferenceWithFocalLength:(float)a0 originalInputDimension:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;

@end
