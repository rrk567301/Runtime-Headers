@class NSArray, NSData, PHAsset, NSNumber;

@interface VCPMADServiceImagePhotosAsset : VCPMADServiceImageAsset {
    PHAsset *_asset;
    NSArray *_resources;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    NSArray *_documentObservations;
    NSArray *_barcodeObservations;
    NSNumber *_hasCachedParseData;
    NSData *_cachedParseData;
}

- (void).cxx_destruct;
- (id)identifier;
- (id).cxx_construct;
- (id)resources;
- (id)location;
- (id)asset;
- (id)faces;
- (BOOL)isScreenshot;
- (id)documentObservations;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (void)setDocumentObservations:(id)a0;
- (BOOL)hasCachedParseData;
- (id)cachedParseData;
- (void)setCachedParseData:(id)a0;
- (void)persistOCRMRC;
- (id)initWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
- (id)initWithPhotosAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
- (id)nsfwClassifications;
- (id)barcodeObservations;
- (void)setBarcodeObservations:(id)a0;
- (id)thumbnailResource;

@end
