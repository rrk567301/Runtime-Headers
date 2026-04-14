@class ANSTFaceAttributeAlgorithmConfiguration;

@interface ANSTFaceAttributeAlgorithm : ANSTAlgorithm {
    ANSTFaceAttributeAlgorithmConfiguration *_configuration;
    struct AcAttrContext { } *_det;
    struct { unsigned int smileThreshold; unsigned int blinkThreshold; unsigned int netInputWidth; unsigned int netInputHeight; unsigned int netInputChannels; unsigned int netInputBatchBytes; unsigned int netOutputWidths[7]; unsigned int netOutputHeights[7]; unsigned int netOutputChannels[7]; int netOutputPixelFormats[7]; unsigned int netOutputBatchesBytes; float netOutputScales[7]; char netOutputNames[7][64]; char netBatchProcedureNames[11][64]; } _detParams;
    struct { unsigned char data[20]; } _detState;
    struct { unsigned int originalImageWidth; unsigned int originalImageHeight; struct { unsigned int format; unsigned int numLevels; unsigned int widths[4]; unsigned int heights[4]; unsigned int rowBytes[4][2]; } imagePyramidInfo; int imageOrientation; } _detControl;
    BOOL _prepared;
    struct e5rt_execution_stream { } *_es;
    struct e5rt_execution_stream_operation { } *_esop;
    struct e5rt_surface_object *_so_inputs_array[10];
    struct __CVBuffer *_input_face_buffers[10];
    struct e5rt_buffer_object *_bo_outputs_array[7];
    struct { struct { void *data; unsigned int height; unsigned int width; unsigned int rowBytes; unsigned int pixelFormat; } inputs[10]; struct { void *data; unsigned int height; unsigned int width; unsigned int rowBytes; unsigned int pixelFormat; } outputs[10][7]; } _attrNetOutputBuffers;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
}

- (BOOL)prepareWithError:(id *)a0;
- (void)dealloc;
- (unsigned long long)version;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)_allocateAndBindInputBuffer:(id *)a0;
- (BOOL)_allocateAndBindOutputBuffers:(id *)a0;
- (void)_destroyAcHandles;
- (BOOL)_initializePixelTransferSession:(id *)a0;
- (BOOL)_initializePostProcessor:(id *)a0;
- (BOOL)_loadE5ExecutionStreamOperation:(id *)a0;
- (void)_releaseInputBuffer;
- (void)_releaseOutputBuffers;
- (void)_releasePixelTransferSession;
- (BOOL)_updateFaceAttributesOfAcResult:(struct { struct { unsigned char x0; char x1[20]; char x2[4][20]; char x3[4][20]; unsigned char x4[32]; } x0; unsigned int x1; unsigned int x2; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; struct { float x0; float x1; float x2; float x3; } x14; struct { float x0; float x1; float x2; float x3; } x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned int x21; struct { float x0; float x1; float x2; float x3; } x22; unsigned char x23; unsigned int x24; unsigned char x25; float x26[64]; unsigned char x27; unsigned int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; unsigned char x40; struct { float x0; float x1; float x2; } x41[98]; struct { float x0; float x1; float x2; } x42[98]; int x43; } x3[10]; unsigned int x4; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; } x5[40]; int x6; unsigned int x7; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; } x8[1]; struct { unsigned char x0[3072]; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; } x9; int x10; } *)a0 inputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (BOOL)updateFaceAttributesOfAcResult:(struct { struct { unsigned char x0; char x1[20]; char x2[4][20]; char x3[4][20]; unsigned char x4[32]; } x0; unsigned int x1; unsigned int x2; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; struct { float x0; float x1; float x2; float x3; } x14; struct { float x0; float x1; float x2; float x3; } x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned int x21; struct { float x0; float x1; float x2; float x3; } x22; unsigned char x23; unsigned int x24; unsigned char x25; float x26[64]; unsigned char x27; unsigned int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; unsigned char x40; struct { float x0; float x1; float x2; } x41[98]; struct { float x0; float x1; float x2; } x42[98]; int x43; } x3[10]; unsigned int x4; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; } x5[40]; int x6; unsigned int x7; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; } x8[1]; struct { unsigned char x0[3072]; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; } x9; int x10; } *)a0 inputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
