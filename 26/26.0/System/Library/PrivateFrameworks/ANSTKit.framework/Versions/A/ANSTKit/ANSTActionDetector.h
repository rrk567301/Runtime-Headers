@class NSData, NSArray, ANSTActionDetectorResult, ANSTVideoFeatureExtractor, ANSTISPAlgorithm, ANSTPixelBufferDescriptor, ANSTActionDetectorConfiguration, ANSTTensorData, ANSTActionHighlightModel;

@interface ANSTActionDetector : ANSTAlgorithm {
    unsigned long long _trackingObjectID;
    ANSTISPAlgorithm *_anstModel;
    ANSTPixelBufferDescriptor *_anstInputBufferDescriptor;
    struct __CVBuffer { } *_anstInputBuffer_landscape;
    struct __CVBuffer { } *_anstInputBuffer_portrait;
    struct OpaqueVTPixelRotationSession { } *_pixelRotationSession;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    ANSTVideoFeatureExtractor *_featureExtractor;
    struct __CVBuffer { } *_featureExtractorInputBuffer;
    NSData *_decodingMatrixData;
    ANSTTensorData *_decodingMatrix;
    ANSTActionHighlightModel *_gruModel;
    struct __CVBuffer { } *_gruModelInputBuffer;
    ANSTTensorData *_gruModelStateTensorData;
    unsigned long long _actionCount;
    unsigned long long _featureLength;
    float *_rawScores;
    float *_probabilities;
    unsigned long long _frameCount;
    BOOL _prepared;
}

@property (readonly, nonatomic) ANSTActionDetectorResult *currentDetection;
@property (nonatomic) long long actionRefreshFrameInterval;
@property (readonly, nonatomic) NSArray *supportedActionTypes;
@property (readonly, nonatomic) ANSTActionDetectorConfiguration *configuration;

+ (id)new;
+ (float)normalizationThresholdForActionType:(id)a0 detectorVersion:(unsigned long long)a1;
+ (id)supportedActionTypesOfDetectorVersion:(unsigned long long)a0;
+ (id)supportedFrameRatesOfDetectorVersion:(unsigned long long)a0;

- (BOOL)prepareWithError:(id *)a0;
- (void)reset;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_postProcessedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maxWidth:(double)a1 maxHeight:(double)a2 contentIsRotated90CCW:(BOOL)a3;
- (void)_releaseResourceSafely;
- (id)_resultForFrameBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1 signpostIDPointer:(const void *)a2 error:(id *)a3;
- (id)resultForFrameBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1 error:(id *)a2;

@end
