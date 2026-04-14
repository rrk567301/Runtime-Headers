@class PDFAnnotationLinkPrivateVars;

@interface PDFAnnotationLink : PDFAnnotation <NSCopying> {
    PDFAnnotationLinkPrivateVars *_private2;
}

- (void)setURL:(id)a0;
- (void)commonInit;
- (id)destination;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDestination:(id)a0;
- (id)URL;
- (void).cxx_destruct;
- (id)init;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (id)mouseDownStyle;
- (void)setMouseDownStyle:(id)a0;

@end
