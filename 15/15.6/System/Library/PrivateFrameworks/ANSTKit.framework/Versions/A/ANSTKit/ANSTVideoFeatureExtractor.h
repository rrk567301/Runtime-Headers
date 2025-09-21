@class ANSTVideoFoundationModel, ANSTVideoFeatureExtractorConfiguration, NSMutableSet, ANSTTensorData;
@protocol ANSTVideoFeatureExtractorDelegate;

@interface ANSTVideoFeatureExtractor : NSObject {
    ANSTVideoFoundationModel *_model;
    float **_windowBuffer;
    int _currentIndex;
    char _windowFilled;
    float *_windowSum;
    float *_normalizedMeanFeature;
    ANSTTensorData *_currentVideoFeatureData;
    char _inputBindingCommitted;
    NSMutableSet *_modalityStatus;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    struct __CVBuffer { } *_rawInputImage;
    struct __CVBuffer { } *_preprocessedInputImage;
    char _needsPreprocessing;
    char _initSucceeded;
}

@property (readonly, nonatomic) ANSTVideoFeatureExtractorConfiguration *configuration;
@property (readonly, nonatomic) long long windowSize;
@property (weak, nonatomic) id<ANSTVideoFeatureExtractorDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (id)_initWithConfig:(id)a0 error:(id *)a1;
- (char)bindAudioInput:(id)a0 error:(id *)a1;
- (char)bindVideoInput:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (char)commitInputBindingWithError:(id *)a0;
- (char)digestFrame:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (char)executeInferenceWithError:(id *)a0;
- (id)getCurrentVideoFeatureWithOutError:(id *)a0;
- (void)releaseResourceSafely;
- (void)resetInferenceState;
- (void)resetInputBinding;

@end
