@class NSData, NSArray;

@interface _CUIThemeSVGRendition : CUIThemeRendition <NSLocking> {
    struct CGSVGDocument { } *_svgDocument;
    NSData *_fileData;
    unsigned int _standardPointSize;
    NSArray *_vectorSizes;
    double _baseline;
    double _capline;
    struct { double top; double left; double bottom; double right; } _alignmentRectInsets;
    BOOL _isAlignmentRect;
    struct CGSize { double width; double height; } _canvasSize;
    float _templateVersion;
    BOOL _isInterpolatable;
    long long _renderingMode;
    short _containsMulticolorLayers;
    short _containsHierarchicalLayers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)unlock;
- (struct CGSVGDocument { } *)svgDocument;
- (id)vectorGlyphAvailableSizes;
- (void)dealloc;
- (void)lock;
- (short)containsMulticolorLayers;
- (double)vectorGlyphCapLine;
- (id)initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1 version:(unsigned int)a2;
- (BOOL)isInterpolatable;
- (struct { double x0; double x1; double x2; double x3; })vectorGlyphAlignmentRectInsets;
- (struct CGSize { double x0; double x1; })canvasSize;
- (double)vectorGlyphBaseline;
- (id)metrics;
- (short)containsHierarchicalLayers;
- (id)rawData;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0 version:(unsigned int)a1;
- (long long)vectorGlyphRenderingMode;
- (double)vectorGlyphReferencePointSize;
- (float)vectorGlyphTemplateVersion;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0 version:(unsigned int)a1;
- (int)pixelFormat;

@end
