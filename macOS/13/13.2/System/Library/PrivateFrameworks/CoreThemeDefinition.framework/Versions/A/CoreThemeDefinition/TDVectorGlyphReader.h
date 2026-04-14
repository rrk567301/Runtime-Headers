@class NSURL, NSDictionary, NSMutableDictionary;

@interface TDVectorGlyphReader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGSVGDocument { } *_svgDocument;
    NSURL *_fileURL;
    NSDictionary *_guideNodes;
    NSDictionary *_vectorGlyphNodes;
    NSMutableDictionary *_vectorGlyphWithWeightSize;
    long long _platform;
    BOOL _isInterpolatable;
    double _sourcePointSize;
    double _defaultPointSize;
}

@property (readonly) float templateVersion;

+ (id)vectorGlyphReaderWithURL:(id)a0 error:(id *)a1;
+ (id)vectorGlyphReaderWithURL:(id)a0 platform:(long long)a1 error:(id *)a2;
+ (void)clearInstanceCache;

- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)containsMulticolorLayers;
- (BOOL)containsHierarchicalLayers;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 platform:(long long)a1 error:(id *)a2;
- (id)initWithData:(id)a0 platform:(long long)a1 error:(id *)a2;
- (BOOL)_commonInitWithData:(id)a0 platform:(long long)a1 error:(id *)a2;
- (BOOL)_readSVGNodesError:(id *)a0;
- (BOOL)_validateVectorGlyphsWithError:(id *)a0;
- (unsigned long long)numberOfVectorGlyphs;
- (double)_sourcePointSize;
- (double)defaultPointSize;
- (id)_glyphNodeIDForWeight:(long long)a0 size:(long long)a1;
- (id)_baselineNodeIDForGlyphSize:(long long)a0;
- (id)_caplineNodeIDForGlyphSize:(long long)a0;
- (id)_marginNodeIDForWeight:(long long)a0 size:(long long)a1 direction:(long long)a2;
- (struct CGSVGDocument { } *)vectorGlyphWithWeight:(long long)a0 size:(long long)a1 error:(id *)a2;
- (BOOL)vectorGlyphExistsWithWeight:(long long)a0 size:(long long)a1 error:(id *)a2;
- (double)baselineForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (double)capHeightForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (struct { double x0; double x1; double x2; double x3; })alignmentRectInsetsForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (struct { double x0; double x1; double x2; double x3; })_interpolatedAlignmentRectInsetsForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (struct { double x0; double x1; double x2; double x3; })_fixedAlignmentRectInsetsForVectorGlyphWithWeight:(long long)a0 size:(long long)a1 foundExactMargins:(BOOL *)a2;
- (void)_calcInterpolatability;
- (BOOL)isInterpolatableForWeight:(long long)a0 size:(long long)a1;
- (struct CGSVGNode { } *)interpolatedSymbolForWeight:(long long)a0 size:(long long)a1;
- (struct CGSize { double x0; double x1; })canvasSizeForWeight:(long long)a0 size:(long long)a1;
- (BOOL)containsWideGamutContent;
- (id)_layerNamesForRenderingMode:(id)a0;
- (id)monochromeLayerNodeNames;
- (id)multicolorLayerNodeNames;
- (id)hierarchicalLayerNodeNames;
- (void)drawInContext:(struct CGContext { } *)a0 atPointSize:(double)a1 scaleFactor:(double)a2 weight:(long long)a3 size:(long long)a4;
- (BOOL)canDrawWithWeight:(long long)a0 size:(long long)a1;

@end
