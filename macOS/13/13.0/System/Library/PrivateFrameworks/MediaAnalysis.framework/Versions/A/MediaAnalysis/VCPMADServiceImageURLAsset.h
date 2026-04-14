@class NSString, NSArray, NSURL, NSData;

@interface VCPMADServiceImageURLAsset : VCPMADServiceImageAsset {
    NSURL *_url;
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
- (unsigned int)orientation;
- (struct CGSize { double x0; double x1; })resolution;
- (BOOL)isHighResDecoded;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1;
- (id)documentObservations;
- (void)setDocumentObservations:(id)a0;
- (BOOL)hasCachedParseData;
- (id)cachedParseData;
- (void)setCachedParseData:(id)a0 overwriteExisting:(BOOL)a1;
- (id)initWithURL:(id)a0 identifier:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3;

@end
