@class NSURL, PDFActionURLPrivateVars;

@interface PDFActionURL : PDFAction <NSCopying> {
    PDFActionURLPrivateVars *_private2;
}

@property (readonly, nonatomic, getter=isSuspiciousURL) BOOL suspiciousURL;
@property (copy, nonatomic) NSURL *URL;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)toolTip;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (const struct __CFDictionary { } *)createDictionaryRef;

@end
