@class ANSTPixelBufferDescriptor, ANSTVideoCaptionAlgorithmConfiguration;

@interface ANSTVideoCaptionAlgorithm : ANSTAlgorithm {
    BOOL _readyForInference;
}

@property (readonly, nonatomic) ANSTVideoCaptionAlgorithmConfiguration *configuration;
@property (readonly, nonatomic) ANSTPixelBufferDescriptor *inputPixelBufferDescriptor;

+ (unsigned long long)_version;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)newEmptyCaptionState;
- (BOOL)updateCaptionState:(id)a0 withPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
