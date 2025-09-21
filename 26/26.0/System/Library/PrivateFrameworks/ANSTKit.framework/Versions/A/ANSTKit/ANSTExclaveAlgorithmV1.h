@class ANSTExclaveAlgorithmConfiguration, ANSTPixelBufferDescriptor;

@interface ANSTExclaveAlgorithmV1 : ANSTExclaveAlgorithm {
    ANSTExclaveAlgorithmConfiguration *_configuration;
    ANSTPixelBufferDescriptor *_networkInputImageDescriptor;
    struct AcANSTContext { } *_det;
    struct { struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netInputBufferDesc[2]; struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netOutputBufferDescs[40]; char netInputNames[2][64]; char netOutputNames[40][64]; unsigned int maxResultCount; unsigned int maxAssoCount; unsigned int maxTrackCount; float undetOverlapThreshold; float oldObjOverlapThreshold; float oldCrossClassObjOverlapThreshold; } _detParams;
    struct { unsigned char data[208544]; } _detState;
    struct { unsigned int originalImageWidth; unsigned int originalImageHeight; unsigned int networkInputWidth; unsigned int networkInputHeight; int imageOrientation; int networkInputResolution; unsigned char restart; int runningFrameRate; unsigned char initWithDetResults; struct { float x; float y; float width; float height; } besCropInfo; int version; float focalLength; unsigned char runSkinTone; unsigned char runBodyKepoints; } _detControl;
    BOOL _prepared;
    BOOL _inputPixelBufferIsBound;
    struct e5rt_execution_stream { } *_es;
    struct e5rt_execution_stream_operation { } *_esop;
    struct e5rt_buffer_object *_bo_outputs_array[10];
    struct { void *data; unsigned int height; unsigned int width; unsigned int rowBytes; unsigned int pixelFormat; } _bmBuffer_outputs[10];
}

+ (unsigned long long)_version;

- (BOOL)prepareWithError:(id *)a0;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)_allocateAndBindOutputBuffers:(id *)a0;
- (void)_destroyAcHandles;
- (id)_executeInferenceWithFocalLength:(float)a0 originalInputDimension:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (BOOL)_initializePostProcessor:(id *)a0;
- (BOOL)_loadE5ExecutionStreamOperation:(id *)a0;
- (void)_releaseOutputBuffers;
- (BOOL)bindNetworkInputPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)executeInferenceWithFocalLength:(float)a0 originalInputDimension:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)networkInputImageDescriptor;

@end
