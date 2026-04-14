@class ANSTE5MLNetwork, NSArray, ANSTPersonInstanceSegmentationConfiguration, ANSTTensorDescriptor, ANSTPixelBufferDescriptor, ANSTTensorSurface;

@interface ANSTPersonInstanceSegmentation : ANSTAlgorithm {
    ANSTPersonInstanceSegmentationConfiguration *_config;
    ANSTE5MLNetwork *_network;
    BOOL _prepared;
    BOOL _inputImageBound;
    BOOL _outputMasksBound;
    BOOL _ioCommitted;
    ANSTPixelBufferDescriptor *_inputPixelBufferDescriptor;
    ANSTTensorDescriptor *_outputTensorDescriptor;
    ANSTTensorSurface *_outputScoresSurface;
    NSArray *_outputMasks;
    void /* unknown type, blank encoding */ *_outputScores;
}

@property (readonly, nonatomic) unsigned long long outputMaskCount;
@property (readonly, nonatomic) float recommendedConfidenceTheshold;
@property (readonly, nonatomic) ANSTPixelBufferDescriptor *inputPixelBufferDescriptor;
@property (readonly, nonatomic) ANSTTensorDescriptor *outputTensorDescriptor;

+ (id)new;
+ (unsigned long long)_version;

- (BOOL)prepareWithError:(id *)a0;
- (void)dealloc;
- (BOOL)resetWithError:(id *)a0;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)bindInputPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)bindOutputTensor:(struct __IOSurface { } *)a0 error:(id *)a1;
- (BOOL)commitIOBindingWithError:(id *)a0;
- (BOOL)executeInferenceWithError:(id *)a0;
- (struct __CVBuffer { } *)outputMaskAtIndex:(unsigned long long)a0 error:(id *)a1;
- (float)outputMaskConfidenceScoreAtIndex:(unsigned long long)a0 error:(id *)a1;

@end
