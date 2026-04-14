@class NSString;

@interface QCTextRenderer : NSObject {
    NSString *_string;
    int _alignmentH;
    int _alignmentV;
    NSString *_fontName;
    double _fontSize;
    double _fontKerning;
    double _offset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    void *_framesetterRef;
    void *_frameRef;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

+ (void)initialize;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)string;
- (void)setString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fontName;
- (void)setLeadingOffset:(double)a0;
- (double)leadingOffset;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)a0;
- (void)setHorizontalAlignment:(int)a0;
- (int)horizontalAlignment;
- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })typographicBounds;
- (double)fontSize;
- (void)setFontName:(id)a0 size:(double)a1;
- (void)_flushCache:(BOOL)a0;
- (void)_updateCache;
- (void)setKerningShift:(double)a0;
- (double)kerningShift;
- (unsigned long long)visibleLineCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleStringRange;
- (void)drawInContext:(struct CGContext { } *)a0 withColorRed:(double)a1 green:(double)a2 blue:(double)a3 alpha:(double)a4;

@end
