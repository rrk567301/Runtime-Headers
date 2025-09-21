@class NSArray, VCPCNNModel, VCPCNNBlurAnalyzer, VCPCNNData;

@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer {
    float _sharpnessBlocks[16];
    NSArray *_faces;
    NSArray *_framePTSResults;
    NSArray *_homographyResults;
    VCPCNNModel *_faceModel;
    VCPCNNData *_faceInput;
    float _livePhotoStillDisplayTime;
    float _imageExposureTime;
    char _useGPU;
    char _sdof;
    float _contrast;
    VCPCNNBlurAnalyzer *_blurAnalyzer;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

@property (readonly) float sharpness;
@property (readonly) float textureScore;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setFaceResults:(id)a0;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 withPreAnalysisScore:(float)a2 results:(id *)a3 cancel:(id /* block */)a4;
- (int)computeGyroSharpness:(float *)a0;
- (int)computeLocalSharpness:(struct __CVBuffer { } *)a0;
- (int)computeSharpnessScore:(float *)a0 forFacesInImage:(struct __CVBuffer { } *)a1;
- (float)estimateDistance:(id)a0 prevHomography:(id)a1;
- (id)initWithFaceResults:(id)a0 sdof:(char)a1;
- (id)initWithFaceResults:(id)a0 sdof:(char)a1 revision:(unsigned long long)a2;
- (void)setGyroSharpnessParam:(id)a0 homographyResults:(id)a1 livePhotoStillDisplayTime:(float)a2 imageExposureTime:(float)a3;
- (void)spatialPooling;

@end
