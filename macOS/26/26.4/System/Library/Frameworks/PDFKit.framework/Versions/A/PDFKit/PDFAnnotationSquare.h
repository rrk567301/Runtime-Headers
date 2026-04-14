@class PDFAnnotationSquarePrivateVars;

@interface PDFAnnotationSquare : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationSquarePrivateVars *_private2;
}

- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)interiorColor;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (void)setInteriorColor:(id)a0;

@end
