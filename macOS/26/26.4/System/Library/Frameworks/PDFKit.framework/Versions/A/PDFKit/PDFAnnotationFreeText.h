@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationFreeTextPrivateVars *_private2;
}

- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFont:(id)a0;
- (id)font;
- (void)encodeWithCoder:(id)a0;
- (long long)alignment;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)fontColor;
- (void)setFontColor:(id)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;

@end
