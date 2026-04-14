@class PDFAnnotationLinkPrivateVars;

@interface PDFAnnotationLink : PDFAnnotation <NSCopying> {
    PDFAnnotationLinkPrivateVars *_private2;
}

- (void)commonInit;
- (void)setURL:(id)a0;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)destination;
- (void).cxx_destruct;
- (void)setDestination:(id)a0;
- (id)init;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (id)mouseDownStyle;
- (void)setMouseDownStyle:(id)a0;

@end
