@class ANSTPixelBufferDescriptor;

@interface ANSTPromptBasedSegmentation : ANSTAlgorithm

@property (retain, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (retain, nonatomic) ANSTPixelBufferDescriptor *inputMaskDescriptor;
@property (retain, nonatomic) ANSTPixelBufferDescriptor *inputScribbleDescriptor;
@property (retain, nonatomic) ANSTPixelBufferDescriptor *outputMaskDescriptor;
@property (nonatomic) long long maximumPointsWithoutBoxInput;
@property (nonatomic) long long maximumPointsWithBoxInput;

+ (id)new;
+ (id)algorithmWithConfiguration:(id)a0 error:(id *)a1;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)getBestMaskWithPromptInput:(id)a0 outputMaskBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (long long)getBestMaskWithPromptInput:(id)a0 outputMaskBuffer:(struct __CVBuffer { } *)a1 outputBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 error:(id *)a3;
- (long long)setInferImage:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
