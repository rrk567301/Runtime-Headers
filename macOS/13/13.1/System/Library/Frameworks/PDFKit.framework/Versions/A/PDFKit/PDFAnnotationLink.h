@class PDFAnnotationLinkPrivateVars;

@interface PDFAnnotationLink : PDFAnnotation <NSCopying> {
    PDFAnnotationLinkPrivateVars *_private2;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)URL;
- (void)setURL:(id)a0;
- (id)destination;
- (void)setDestination:(id)a0;
- (void)commonInit;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)mouseDownStyle;
- (void)setMouseDownStyle:(id)a0;

@end
