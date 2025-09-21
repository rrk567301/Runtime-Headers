@class NSURL, NSDictionary, NSMutableDictionary;

@interface TDVectorGlyphReader : NSObject <CUIVectorGlyhLayerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGSVGDocument { } *_svgDocument;
    NSURL *_fileURL;
    NSDictionary *_guideNodes;
    NSDictionary *_vectorGlyphNodes;
    NSDictionary *_vectorGlyphRotateAnchorNodes;
    NSMutableDictionary *_vectorGlyphWithWeightSize;
    long long _platform;
    char _isInterpolatable;
    double _sourcePointSize;
    double _defaultPointSize;
    struct CGSVGNode { } *_layerTreeNode;
    double _drawingPointSize;
    double _drawingScale;
    struct CGSVGDocument { } *_drawingSymbol;
}

@property (readonly) float templateVersion;

+ (id)vectorGlyphReaderWithURL:(id)a0 error:(id *)a1;
+ (struct CGPoint { double x0; double x1; })_anchorInOutlineCoordinateSpaceForAnchor:(struct CGSVGNode { } *)a0 glyph:(struct CGSVGNode { } *)a1;
+ (void)clearInstanceCache;
+ (id)vectorGlyphReaderWithURL:(id)a0 platform:(long long)a1 error:(id *)a2;

- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (double)scale;
- (id)_symbolDefaults;
- (void)_legacy_drawHierarchicalLayerNamed:(id)a0 inContext:(struct CGContext { } *)a1 scaleFactor:(double)a2 targetSize:(struct CGSize { double x0; double x1; })a3 colorResolver:(id /* block */)a4;
- (void)_legacy_drawMonochromeLayerNamed:(id)a0 inContext:(struct CGContext { } *)a1 scaleFactor:(double)a2 targetSize:(struct CGSize { double x0; double x1; })a3 onFillColor:(struct CGColor { } *)a4 offFillColor:(struct CGColor { } *)a5;
- (void)_legacy_drawMulticolorLayerNamed:(id)a0 inContext:(struct CGContext { } *)a1 scaleFactor:(double)a2 targetSize:(struct CGSize { double x0; double x1; })a3 colorResolver:(id /* block */)a4;
- (double)_requestedPointSizeRatio;
- (struct CGSVGAttributeMap { } *)attributesForLayerNamed:(id)a0;
- (char)containsHierarchicalLayers;
- (char)containsMulticolorLayers;
- (id)fillImageNames;
- (struct CGImage { } *)fillImageWithName:(id)a0;
- (id)pathForLayerNamed:(id)a0;
- (struct CGSize { double x0; double x1; })referenceCanvasSize;
- (double)strokeWidthForLayerNamed:(id)a0;
- (struct CGSVGAttributeMap { } *)styleForLayerName:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (char)_validateVectorGlyphsWithError:(id *)a0;
- (char)isInterpolatableForWeight:(long long)a0 size:(long long)a1;
- (id)_baselineNodeIDForGlyphSize:(long long)a0;
- (void)_calcInterpolatability;
- (id)_caplineNodeIDForGlyphSize:(long long)a0;
- (char)_commonInitWithData:(id)a0 platform:(long long)a1 error:(id *)a2;
- (struct { double x0; double x1; double x2; double x3; })_fixedAlignmentRectInsetsForVectorGlyphWithWeight:(long long)a0 size:(long long)a1 foundExactMargins:(char *)a2;
- (id)_glyphNodeIDForWeight:(long long)a0 size:(long long)a1;
- (struct { double x0; double x1; double x2; double x3; })_interpolatedAlignmentRectInsetsForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (id)_layerNamesForRenderingMode:(id)a0;
- (id)_marginNodeIDForWeight:(long long)a0 size:(long long)a1 direction:(long long)a2;
- (id)_pathForLayerNamed:(id)a0 inDocument:(struct CGSVGDocument { } *)a1;
- (char)_readSVGNodesError:(id *)a0;
- (double)_sourcePointSize;
- (struct { double x0; double x1; double x2; double x3; })alignmentRectInsetsForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (double)baselineForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (char)canDrawWithWeight:(long long)a0 size:(long long)a1;
- (struct CGSize { double x0; double x1; })canvasSizeForWeight:(long long)a0 size:(long long)a1;
- (double)capHeightForVectorGlyphWithWeight:(long long)a0 size:(long long)a1;
- (char)containsWideGamutContent;
- (id)createMonochromeLayerGroupForSymbol:(struct CGSVGDocument { } *)a0 layerNames:(id)a1;
- (double)defaultPointSize;
- (void)drawInContext:(struct CGContext { } *)a0 atPointSize:(double)a1 scaleFactor:(double)a2 weight:(long long)a3 size:(long long)a4;
- (id)hierarchicalLayerNodeNames;
- (id)initWithData:(id)a0 platform:(long long)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 platform:(long long)a1 error:(id *)a2;
- (char)interpolatedRotateAnchorForWeight:(long long)a0 size:(long long)a1 scaleFactor:(double)a2 point:(struct CGPoint { double x0; double x1; } *)a3;
- (struct CGSVGNode { } *)interpolatedSymbolForWeight:(long long)a0 size:(long long)a1;
- (id)monochromeLayerNodeNames;
- (id)multicolorLayerNodeNames;
- (unsigned long long)numberOfVectorGlyphs;
- (char)vectorGlyphExistsWithWeight:(long long)a0 size:(long long)a1 error:(id *)a2;
- (struct CGSVGDocument { } *)vectorGlyphWithWeight:(long long)a0 size:(long long)a1 error:(id *)a2;

@end
