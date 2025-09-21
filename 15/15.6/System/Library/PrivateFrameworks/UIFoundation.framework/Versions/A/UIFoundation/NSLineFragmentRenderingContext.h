@class NSString, CUIStyleEffectConfiguration, CUICatalog, __NSImmutableTextStorage;

@interface NSLineFragmentRenderingContext : NSObject <NSTextApplicationFrameworkContextClient> {
    void *_runs;
    long long _numRuns;
    unsigned short *_glyphs;
    struct CGSize { double x0; double x1; } *_advancements;
    double _leftSideDelta;
    double _lineWidth;
    double _leftControlWidth;
    double _rightControlWidth;
    double _elasticWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageBounds;
    struct { unsigned char _isRTL : 1; unsigned char _vAdvance : 1; unsigned char _flipped : 1; unsigned char _usesSimpleTextEffects : 1; unsigned char _applicationFrameworkContext : 3; unsigned int _reserved : 25; } _flags;
    __NSImmutableTextStorage *_textStorage;
    long long _appContext;
}

@property long long resolvedTextAlignment;
@property long long resolvedBaseWritingDirection;
@property (retain) CUICatalog *cuiCatalog;
@property (retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) char usesSimpleTextEffects;
@property long long applicationFrameworkContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (oneway void)release;
- (void)dealloc;
- (void)finalize;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1;
- (double)elasticWidth;
- (void)getMaximumAscender:(double *)a0 minimumDescender:(double *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageBounds;
- (id)initWithTextStorage:(id)a0 runs:(struct __CFArray { } *)a1 glyphOrigin:(double)a2 lineFragmentWidth:(double)a3 elasticWidth:(double)a4 usesScreenFonts:(char)a5 isRTL:(char)a6 applicationFrameworkContext:(long long)a7;
- (char)isRTL;
- (double)lineFragmentWidth;
- (struct CGSize { double x0; double x1; })sizeWithBehavior:(long long)a0 usesFontLeading:(char)a1 baselineDelta:(double *)a2;

@end
