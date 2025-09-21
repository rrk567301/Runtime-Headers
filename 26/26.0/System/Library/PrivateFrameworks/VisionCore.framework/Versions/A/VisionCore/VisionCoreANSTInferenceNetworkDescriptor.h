@class ANSTInferenceDescriptor;

@interface VisionCoreANSTInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    ANSTInferenceDescriptor *_descriptor;
}

+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;

- (id)URL;
- (void).cxx_destruct;
- (BOOL)requiresPostProcessing;
- (id)postProcessingOutputDescriptors;
- (id)_anstPixelBufferRepresentation:(id)a0 pixelBufferRepresentation:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 error:(id *)a3;
- (id)_anstTensorDataRepresentation:(id)a0 data:(id)a1 error:(id *)a2;
- (id)_outputDescriptorWithName:(id)a0 postProcessor:(id)a1;
- (id)initWithDescriptor:(id)a0 version:(id)a1 identifier:(id)a2;

@end
