@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationFreeTextPrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (long long)alignment;
- (id)font;
- (void)setFont:(id)a0;
- (void)commonInit;
- (id)fontColor;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)setFontColor:(id)a0;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;

@end
