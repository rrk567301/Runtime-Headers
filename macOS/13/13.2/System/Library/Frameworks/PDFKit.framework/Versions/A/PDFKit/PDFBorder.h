@class NSArray, NSDictionary, PDFBorderPrivateVars;

@interface PDFBorder : NSObject <NSCopying, NSCoding> {
    PDFBorderPrivateVars *_private;
}

@property (nonatomic) long long style;
@property (nonatomic) double lineWidth;
@property (copy, nonatomic) NSArray *dashPattern;
@property (readonly, copy, nonatomic) NSDictionary *borderKeyValues;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAnnotation:(id)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (const double *)dashPatternRaw;
- (BOOL)_isRectangular;
- (void)_updateDashPatternRaw;
- (unsigned int)dashCountRaw;
- (void)_setStyleFromDictionary:(struct CGPDFDictionary { } *)a0;
- (void)_setDashFromArray:(struct CGPDFArray { } *)a0;
- (BOOL)setBorderCharacteristicsFromArray:(struct CGPDFArray { } *)a0;
- (double)horizontalCornerRadius;
- (void)updateCornerBorderStyle;
- (void)setHorizontalCornerRadius:(double)a0;
- (double)verticalCornerRadius;
- (void)setVerticalCornerRadius:(double)a0;

@end
