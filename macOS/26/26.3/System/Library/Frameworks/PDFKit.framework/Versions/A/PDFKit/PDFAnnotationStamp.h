@class PDFAnnotationStampPrivateVars;

@interface PDFAnnotationStamp : PDFAnnotation <NSCopying> {
    PDFAnnotationStampPrivateVars *_private2;
}

- (void)commonInit;
- (id)name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;

@end
