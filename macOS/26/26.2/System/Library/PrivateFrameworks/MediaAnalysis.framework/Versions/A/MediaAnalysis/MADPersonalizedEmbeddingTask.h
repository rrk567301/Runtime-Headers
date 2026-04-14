@class VUWGallery;

@interface MADPersonalizedEmbeddingTask : MADMultiModalProcessingSubtask {
    VUWGallery *_gallery;
}

+ (id)embeddingFromMultiArray:(id)a0 normalize:(BOOL)a1 version:(unsigned long long)a2;
+ (BOOL)prewarmRequest:(id)a0 error:(id *)a1;

- (long long)revision;
- (int)run;
- (void).cxx_destruct;
- (unsigned long long)imageEmbeddingVersion;
- (id)gallery;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)processGenerativePlaygroundsOutput:(id)a0 resource:(id)a1 imageSegment:(id)a2 personalizationIndex:(unsigned long long)a3 embeddingResult:(id *)a4 hiddenLayerResult:(id *)a5 pooledEmbeddingResult:(id *)a6;
- (int)processInput:(id)a0 resource:(id)a1 result:(id *)a2;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 imageEmbedding:(id *)a1;
- (int)processSegments:(id)a0 resource:(id)a1 keyImageSegment:(id *)a2 personalizationIndex:(unsigned long long *)a3 textEncoderInputs:(id)a4;
- (int)processSystemSearchOutput:(id)a0 resource:(id)a1 embeddingResult:(id *)a2;

@end
