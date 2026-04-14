@class ANSTExclaveObjectDetectionAlgorithmPostProcessing, ANSTE5MLNetwork, ANSTExclaveObjectDetectionAlgorithmConfiguration, ANSTTensorSurface;

@interface ANSTExclaveObjectDetectionAlgorithmOpenMirror : ANSTAlgorithm {
    BOOL _prepared;
    ANSTExclaveObjectDetectionAlgorithmConfiguration *_configuration;
    ANSTExclaveObjectDetectionAlgorithmPostProcessing *_postProcessor;
    ANSTE5MLNetwork *_e5infer;
    ANSTTensorSurface *_input_image_surface;
    ANSTTensorSurface *_logits_output_flat;
    ANSTTensorSurface *_bbox_reg_output_flat;
    ANSTTensorSurface *_centerness_output_flat;
    ANSTTensorSurface *_face_pose_output_flat;
    BOOL _inputAlreadyBound;
}

- (id)initWithConfiguration:(id)a0;
- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)bindInputSurface:(struct __IOSurface { } *)a0 error:(id *)a1;
- (BOOL)commitNetworkIOBindingsWithError:(id *)a0;
- (id)resultByRunningInferenceWithError:(id *)a0;

@end
