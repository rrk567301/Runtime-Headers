@class ANSTVideoFoundationModel, ANSTVideoFeatureExtractorConfiguration, ANSTTensorDescriptor, ANSTPixelBufferDescriptor, ANSTTensorData, NSMutableSet;
@protocol ANSTVideoFeatureExtractorDelegate;

@interface ANSTVideoFeatureExtractor : NSObject {
    ANSTVideoFoundationModel *_model;
    float **_windowBuffer;
    int _currentIndex;
    BOOL _windowFilled;
    float *_windowSum;
    float *_normalizedMeanFeature;
    ANSTTensorData *_currentVideoFeatureData;
    BOOL _inputBindingCommitted;
    NSMutableSet *_modalityStatus;
    struct __CVBuffer { } *_rawInputImage;
    struct __CVBuffer { } *_preprocessedInputImage;
    BOOL _needsPreprocessing;
    BOOL _initSucceeded;
}

@property (readonly, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, nonatomic) ANSTTensorDescriptor *outputFeatureDescriptor;
@property (readonly, nonatomic) struct OpaqueVTPixelTransferSession { } *pixelTransferSession;
@property (readonly, nonatomic) ANSTVideoFeatureExtractorConfiguration *configuration;
@property (readonly, nonatomic) long long windowSize;
@property (weak, nonatomic) id<ANSTVideoFeatureExtractorDelegate> delegate;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (id)_initWithConfig:(id)a0 error:(id *)a1;
- (BOOL)bindAudioInput:(id)a0 error:(id *)a1;
- (BOOL)bindVideoInput:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)commitInputBindingWithError:(id *)a0;
- (BOOL)digestFrame:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)executeInferenceWithError:(id *)a0;
- (id)getCurrentVideoFeatureWithOutError:(id *)a0;
- (void)releaseResourceSafely;
- (void)resetInferenceState;
- (void)resetInputBinding;

@end
