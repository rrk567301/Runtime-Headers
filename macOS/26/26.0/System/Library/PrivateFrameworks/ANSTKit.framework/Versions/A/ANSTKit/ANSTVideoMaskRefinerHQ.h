@class ANSTE5MLNetwork, ANSTPixelBuffer, ANSTPixelBufferDescriptor, ANSTVideoMaskRefinerHQConfiguration;

@interface ANSTVideoMaskRefinerHQ : ANSTAlgorithm {
    ANSTVideoMaskRefinerHQConfiguration *_config;
    ANSTE5MLNetwork *_network;
    BOOL _prepared;
    BOOL _inputImageBound;
    BOOL _inputCoarseMaskBound;
    BOOL _outputRefinedMaskBound;
    BOOL _ioCommitted;
    long long _mode;
    ANSTPixelBufferDescriptor *_inputImageDescriptor;
    ANSTPixelBufferDescriptor *_inputCoarseMaskDescriptor;
    ANSTPixelBufferDescriptor *_outputRefinedMaskDescriptor;
    struct __CVBuffer { } *_inputCoarseMaskBuffer;
    struct __CVBuffer { } *_outputRefinedMaskBuffer;
    unsigned long long _expectedMaskSizeInBytes;
    ANSTPixelBuffer *_inputHardMask;
    ANSTPixelBuffer *_inputLastAlpha;
    ANSTPixelBuffer *_inputLastAlpha2;
}

@property (readonly, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, nonatomic) ANSTPixelBufferDescriptor *inputCoarseMaskDescriptor;
@property (readonly, nonatomic) ANSTPixelBufferDescriptor *outputRefinedMaskDescriptor;

+ (id)new;
+ (unsigned long long)_version;

- (BOOL)prepareWithError:(id *)a0;
- (void)dealloc;
- (BOOL)resetWithError:(id *)a0;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)bindInputCoarseMaskBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)bindInputImageBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)bindOutputRefinedMaskBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)commitIOBindingWithError:(id *)a0;
- (BOOL)executeInferenceWithError:(id *)a0;

@end
