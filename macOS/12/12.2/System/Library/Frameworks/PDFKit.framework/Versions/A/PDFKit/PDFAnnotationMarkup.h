@class PDFAnnotationMarkupPrivateVars;

@interface PDFAnnotationMarkup : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationMarkupPrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setColor:(id)a0;
- (void)setPage:(id)a0;
- (void)commonInit;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)quadrilateralPoints;
- (long long)markupType;
- (void)setQuadrilateralPoints:(id)a0;
- (void)setMarkupType:(long long)a0;

@end
