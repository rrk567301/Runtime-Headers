@class NSString, NSArray, NSData;

@interface VCPMADServiceImagePixelBufferAsset : VCPMADServiceImageAsset {
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    NSString *_identifier;
    NSArray *_documentObservations;
    char _hasCachedParseData;
    NSData *_cachedParseData;
}

- (void).cxx_destruct;
- (id)identifier;
- (id).cxx_construct;
- (unsigned int)orientation;
- (struct CGSize { double x0; double x1; })resolution;
- (unsigned long long)assetType;
- (id)cachedParseData;
- (id)documentObservations;
- (char)hasCachedParseData;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 andIdentifier:(id)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
- (char)isHighResDecoded;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (void)setCachedParseData:(id)a0 overwriteExisting:(char)a1;
- (void)setDocumentObservations:(id)a0;

@end
