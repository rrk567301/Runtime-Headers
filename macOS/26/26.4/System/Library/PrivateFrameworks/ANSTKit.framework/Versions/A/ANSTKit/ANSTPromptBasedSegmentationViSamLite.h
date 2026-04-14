@class ANSTPromptBasedSegmentationViSamLiteInferOnly, ANSTPromptBasedSegmentationViSamLiteConfiguration;

@interface ANSTPromptBasedSegmentationViSamLite : ANSTPromptBasedSegmentation {
    ANSTPromptBasedSegmentationViSamLiteConfiguration *_configuration;
    ANSTPromptBasedSegmentationViSamLiteInferOnly *_infer_point_net;
    ANSTPromptBasedSegmentationViSamLiteInferOnly *_infer_box_net;
    unsigned long long _image_fix_width;
    unsigned long long _image_fix_height;
    unsigned long long _low_res_fix_width;
    unsigned long long _low_res_fix_height;
    BOOL _hasImageSet;
    BOOL _hasPrepared;
    float _not_a_point_embed_weight[256];
    float _point_embeddings_weight[1024];
    float _positional_encoding_gaussian_matrix[256];
}

+ (id)new;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)createStaticWeightsFromBin:(id)a0 toPointer:(float *)a1 assertLen:(unsigned long long)a2;
- (void)feedSparse:(id)a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2 withBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)feedSparse:(id)a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2 withPoint:(id)a3;
- (long long)getBestMaskWithPromptInput:(id)a0 outputMaskBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (long long)getBestMaskWithPromptInput:(id)a0 outputMaskBuffer:(struct __CVBuffer { } *)a1 outputBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 error:(id *)a3;
- (long long)setInferImage:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
