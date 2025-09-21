@class NSString, NSFont;

@interface KeynoteQuicklook.KNLiveVideoSourceSymbolDrawingHelper : NSObject {
    void /* function */ abbreviationText;
    void /* unknown type, empty encoding */ lastDrawnAbbreviationTextFixedPointSize;
    void /* unknown type, empty encoding */ lastDrawnAbbreviationTextBoundsSize;
    void /* unknown type, empty encoding */ lastDrawnAbbreviationTextLine;
    void /* unknown type, empty encoding */ lastDrawnAbbreviationTextColor;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } maxRasterizedSymbolSize;

@property (nonatomic, readonly) NSString *abbreviationText;
@property (nonatomic, readonly) long long imageIdentifier;
@property (nonatomic, readonly) long long tintColorIdentifier;
@property (nonatomic) BOOL drawsInvisibleText;
@property (nonatomic, retain) NSFont *lastDrawnAbbreviationFont;

+ (id)fontWithPointSize:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })boundsSizeForPointSize:(double)a0;
- (void)drawIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 includeBackground:(BOOL)a2;
- (void)drawWithPointSize:(double)a0 centeredIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2 includeBackground:(BOOL)a3;
- (id)initWithAbbreviationText:(id)a0 imageIdentifier:(long long)a1 tintColorIdentifier:(long long)a2;

@end
