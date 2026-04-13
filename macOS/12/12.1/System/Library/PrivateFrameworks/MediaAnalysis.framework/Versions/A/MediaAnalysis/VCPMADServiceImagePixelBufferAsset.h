@class NSString, NSArray, NSData;

@interface VCPMADServiceImagePixelBufferAsset : VCPMADServiceImageAsset {
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    NSString *_identifier;
    NSArray *_documentObservations;
    BOOL _hasCachedParseData;
    NSData *_cachedParseData;
}

- (void).cxx_destruct;
- (id)identifier;
- (id).cxx_construct;
- (id)documentObservations;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (void)setDocumentObservations:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 andIdentifier:(id)a2 clientBundleID:(id)a3 clientTeamID:(id)a4;
- (BOOL)hasCachedParseData;
- (id)cachedParseData;
- (void)setCachedParseData:(id)a0;

@end
