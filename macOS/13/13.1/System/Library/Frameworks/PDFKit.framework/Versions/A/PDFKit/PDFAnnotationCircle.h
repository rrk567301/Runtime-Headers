@class PDFAnnotationCirclePrivateVars;

@interface PDFAnnotationCircle : PDFAnnotation <NSCopying> {
    PDFAnnotationCirclePrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)interiorColor;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (void)setInteriorColor:(id)a0;

@end
