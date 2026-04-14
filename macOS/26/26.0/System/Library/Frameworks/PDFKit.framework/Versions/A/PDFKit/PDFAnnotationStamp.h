@class PDFAnnotationStampPrivateVars;

@interface PDFAnnotationStamp : PDFAnnotation <NSCopying> {
    PDFAnnotationStampPrivateVars *_private2;
}

- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;

@end
