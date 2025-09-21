@class PDFAnnotationLinkPrivateVars;

@interface PDFAnnotationLink : PDFAnnotation <NSCopying> {
    PDFAnnotationLinkPrivateVars *_private2;
}

- (id)URL;
- (void)commonInit;
- (void)setDestination:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)destination;
- (void)setURL:(id)a0;
- (void).cxx_destruct;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (id)mouseDownStyle;
- (void)setMouseDownStyle:(id)a0;

@end
