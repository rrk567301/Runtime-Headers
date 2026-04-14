@class ANSTE5MLNetwork, ANSTPixelBuffer, ANSTTensorSurface, NSString;

@interface ANSTPromptBasedSegmentationViSamLiteInferOnly : NSObject {
    ANSTE5MLNetwork *_viSamLite_net;
    ANSTPixelBuffer *_input_image_surface;
    ANSTTensorSurface *_input_sparse_embeddings_surface;
    ANSTTensorSurface *_output_low_res_masks_surface;
    ANSTTensorSurface *_output_high_res_masks_surface;
    NSString *_funcName;
}

+ (id)new;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setInputPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)get_input_image;
- (id)get_input_sparse_embeddings;
- (id)get_output_high_res_masks;
- (id)get_output_low_res_masks;
- (BOOL)infer:(id *)a0;
- (id)initWithFuncName:(id)a0 error:(id *)a1;

@end
