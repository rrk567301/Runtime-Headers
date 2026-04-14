@class ANSTE5MLNetwork, ANSTPixelBuffer, ANSTTensorSurface, NSString;

@interface ANSTVideoMaskTrackingViSamInitModelInferOnly : NSObject {
    ANSTE5MLNetwork *_ViSamTrackerInit_net;
    ANSTPixelBuffer *_input_image;
    ANSTTensorSurface *_input_mask;
    ANSTTensorSurface *_output_low_res_masks;
    ANSTTensorSurface *_output_high_res_masks;
    ANSTTensorSurface *_output_obj_ptr;
    ANSTTensorSurface *_output_object_score_logits;
    ANSTTensorSurface *_output_maskmem_features;
    ANSTTensorSurface *_output_maskmem_pos_enc;
    NSString *_funcName;
}

+ (id)new;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)get_input_image;
- (id)get_input_mask;
- (id)get_output_high_res_masks;
- (id)get_output_low_res_masks;
- (id)get_output_maskmem_features;
- (id)get_output_maskmem_pos_enc;
- (id)get_output_obj_ptr;
- (id)get_output_object_score_logits;
- (BOOL)infer:(id *)a0;
- (id)initWithFuncName:(id)a0 error:(id *)a1;
- (BOOL)setInputPixelBuffer:(struct __CVBuffer { } *)a0 andInitMask:(struct __CVBuffer { } *)a1;

@end
