@class NSString, NSDictionary, NSAppearance, NSAttributedString;

@interface QLCustomTextLayer : CALayer {
    NSAppearance *_appearance;
    struct CGSize { double width; double height; } _textSize;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct CGSize { double width; double height; } textMargins;
@property (readonly) struct CGSize { double x0; double x1; } textSize;
@property BOOL animates;

+ (id)_sharedStringDrawingContext;

- (void)dealloc;
- (void)setContentsScale:(double)a0;
- (id)actionForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)needsDisplayOnBoundsChange;
- (void)_updateLayerSize;
- (void)_updateTextSize;
- (void)set_QLLayerAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })sizeToFitInSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawWithinAppearanceInContext:(struct CGContext { } *)a0;

@end
