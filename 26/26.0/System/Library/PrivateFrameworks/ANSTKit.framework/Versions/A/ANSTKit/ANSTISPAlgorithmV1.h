@class ANSTBaseNetworkEspresso, ANSTISPAlgorithmConfiguration, NSMutableArray, ANSTFaceAttributeAlgorithm;

@interface ANSTISPAlgorithmV1 : ANSTISPAlgorithm {
    ANSTISPAlgorithmConfiguration *_config;
    ANSTBaseNetworkEspresso *_network;
    NSMutableArray *_networkOutputNames;
    struct AcANSTContext { } *_det;
    struct { struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netInputBufferDesc[2]; struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netOutputBufferDescs[40]; char netInputNames[2][64]; char netOutputNames[40][64]; unsigned int maxResultCount; unsigned int maxAssoCount; unsigned int maxTrackCount; float undetOverlapThreshold; float oldObjOverlapThreshold; float oldCrossClassObjOverlapThreshold; } _detParams;
    struct { unsigned char data[208544]; } _detState;
    struct { unsigned int originalImageWidth; unsigned int originalImageHeight; unsigned int networkInputWidth; unsigned int networkInputHeight; int imageOrientation; int networkInputResolution; unsigned char restart; int runningFrameRate; unsigned char initWithDetResults; struct { float x; float y; float width; float height; } besCropInfo; int version; float focalLength; unsigned char runSkinTone; unsigned char runBodyKepoints; } _detControl;
    BOOL _readyForInference;
    struct __CVBuffer { } *_resizedInputBuffer;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    struct __CVPixelBufferPool { } *_outputSemanticBufferPool;
    struct __CVPixelBufferPool { } *_outputSaliencyBufferPool;
    ANSTFaceAttributeAlgorithm *_faceAttributeNetwork;
}

+ (unsigned long long)_version;

- (BOOL)prepareWithError:(id *)a0;
- (void)dealloc;
- (BOOL)resetWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)_createCVPixelBuffer_Uint8_fromAcSaliencyHeatMap:(struct { unsigned char x0[3072]; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; })a0;
- (struct __CVBuffer { } *)_createCVPixelBuffer_Uint8_fromEspressoBufferFloat32:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0;
- (BOOL)_destroyPostProcessingWithError:(id *)a0;
- (BOOL)_initializePostProcessingWithError:(id *)a0;
- (id)_networkResultWithOriginalInputImage:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (unsigned long long)networkInputBufferHeight;
- (unsigned int)networkInputBufferPixelFormat;
- (unsigned long long)networkInputBufferWidth;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1 error:(id *)a2;
- (void)undoPrepareSideEffects;

@end
