@class NSString, CATextLayer;

@interface ZMWButtonView : ZMWView {
    CATextLayer *_textLayer;
    struct CGColor { } *_backgroundColor;
    struct CGColor { } *_borderColor;
    struct CGColor { } *_highlightBackgroundColor;
    struct CGColor { } *_highlightBorderColor;
    struct CGColor { } *_fontColor;
    struct CGFont { } *_font;
    double _textWidth;
    double _textHeight;
}

@property (nonatomic) struct CGColor { } *backgroundColor;
@property (nonatomic) struct CGColor { } *borderColor;
@property (nonatomic) struct CGColor { } *highlighBackgroundColor;
@property (nonatomic) struct CGColor { } *highlightBorderColor;
@property (nonatomic) struct CGColor { } *fontColor;
@property (nonatomic) struct CGFont { } *font;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (nonatomic) double horizPadding;
@property (nonatomic) double vertPadding;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL highlighted;

- (struct CGFont { } *)font;
- (void)refresh;
- (struct CGColor { } *)borderColor;
- (struct CGColor { } *)backgroundColor;
- (void)setBackgroundColor:(struct CGColor { } *)a0;
- (void)dealloc;
- (void)setFont:(struct CGFont { } *)a0;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (void).cxx_destruct;
- (struct CGColor { } *)fontColor;
- (void)setFontColor:(struct CGColor { } *)a0;
- (void)_updateTextProperties;
- (struct CGColor { } *)highlighBackgroundColor;
- (struct CGColor { } *)highlightBorderColor;
- (id)initWithSuperlayer:(id)a0 connection:(unsigned int)a1;
- (void)setHighlighBackgroundColor:(struct CGColor { } *)a0;
- (void)setHighlightBorderColor:(struct CGColor { } *)a0;

@end
