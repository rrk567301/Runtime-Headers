@class VCPImageBackboneAnalyzer;

@interface VCPImageCaptionAnalyzer : VCPImageAnalyzer {
    struct CVNLPCaptionHandler { } *_captionHandlerRef;
    struct __CVBuffer { } *_rescaledImageBuffer;
    long long _modelType;
    long long _safetyType;
    VCPImageBackboneAnalyzer *_imageBackboneAnalyzer;
    char _useSharedModel;
}

+ (char)useVCPMobileAssetAXCaptionModel;
+ (char)greedySearchEnabled;
+ (id)sharedCVNLPCaptionHandlerWithOptions:(id)a0 identifier:(id)a1;
+ (char)writeSpatialEmbeddingToFile;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)analyzeEmbedding:(id)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (char)containPotentialUnsafeContent:(struct __CVBuffer { } *)a0;
- (id)initWithCaptionModelType:(long long)a0 captionSafetyType:(long long)a1 useSharedModel:(char)a2;

@end
