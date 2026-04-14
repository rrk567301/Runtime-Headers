@class NSArray, NSData, PHAsset, NSNumber;

@interface VCPMADServiceImagePhotosAsset : VCPMADServiceImageAsset {
    PHAsset *_asset;
    NSArray *_resources;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _highResPixelBuffer;
    unsigned int _highResOrientation;
    NSArray *_documentObservations;
    NSArray *_barcodeObservations;
    NSNumber *_hasCachedParseData;
    NSData *_cachedParseData;
}

- (void).cxx_destruct;
- (id)identifier;
- (id).cxx_construct;
- (id)resources;
- (BOOL)isSensitive;
- (id)location;
- (unsigned int)orientation;
- (struct CGSize { double x0; double x1; })resolution;
- (id)asset;
- (id)faces;
- (BOOL)isScreenshot;
- (BOOL)isHighResDecoded;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (id)documentObservations;
- (void)setDocumentObservations:(id)a0;
- (BOOL)hasCachedParseData;
- (id)cachedParseData;
- (void)setCachedParseData:(id)a0 overwriteExisting:(BOOL)a1;
- (id)initWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
- (id)initWithPhotosAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
- (id)nsfwClassifications;
- (id)scenenetClassifications;
- (int)loadHighResPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (void)persistOCRMRC;
- (id)barcodeObservations;
- (void)setBarcodeObservations:(id)a0;
- (id)thumbnailResource;
- (BOOL)hasValidSceneProcessing;

@end
