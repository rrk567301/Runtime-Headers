@class PDFAnnotationLinkPrivateVars;

@interface PDFAnnotationLink : PDFAnnotation <NSCopying> {
    PDFAnnotationLinkPrivateVars *_private2;
}

- (void)commonInit;
- (id)init;
- (id)destination;
- (id)URL;
- (void)setDestination:(id)a0;
- (void)setURL:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (id)mouseDownStyle;
- (void)setMouseDownStyle:(id)a0;

@end
