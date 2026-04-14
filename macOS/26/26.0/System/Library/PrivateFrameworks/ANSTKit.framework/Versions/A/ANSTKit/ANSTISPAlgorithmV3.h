@class ANSTE5MLNetwork, ANSTPixelBuffer, ANSTISPAlgorithmConfiguration, ANSTISPInferencePostprocessor, ANSTFaceAttributeAlgorithm;

@interface ANSTISPAlgorithmV3 : ANSTISPAlgorithm {
    ANSTISPAlgorithmConfiguration *_config;
    unsigned long long _networkInputBufferWidth;
    unsigned long long _networkInputBufferHeight;
    unsigned int _networkInputBufferPixelFormat;
    BOOL _readyForInference;
    ANSTE5MLNetwork *_network;
    ANSTE5MLNetwork *_partialNetwork;
    ANSTISPInferencePostprocessor *_postprocessor;
    ANSTFaceAttributeAlgorithm *_faceAttributeNetwork;
    ANSTPixelBuffer *_inputImagePixelBuffer;
    ANSTPixelBuffer *_outputPersonMaskPixelBuffer;
    ANSTPixelBuffer *_outputSalientPersonMaskPixelBuffer;
    ANSTPixelBuffer *_outputSkinMaskPixelBuffer;
    ANSTPixelBuffer *_outputHairMaskPixelBuffer;
    ANSTPixelBuffer *_outputSkyMaskPixelBuffer;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
}

+ (unsigned long long)_version;
+ (BOOL)_requiresPartialNetwork:(id)a0;
+ (id)networkDescriptorForConfig:(id)a0;

- (BOOL)prepareWithError:(id *)a0;
- (void)dealloc;
- (BOOL)resetWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)_prepareWithError:(id *)a0;
- (BOOL)_preparePostProcessorWithNetworkDescriptor:(id)a0 error:(id *)a1;
- (id)_resultForPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1 error:(id *)a2;
- (BOOL)_retainIOReferencesWithNetworkDescriptor:(id)a0 error:(id *)a1;
- (unsigned long long)networkInputBufferHeight;
- (unsigned int)networkInputBufferPixelFormat;
- (unsigned long long)networkInputBufferWidth;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1 error:(id *)a2;

@end
