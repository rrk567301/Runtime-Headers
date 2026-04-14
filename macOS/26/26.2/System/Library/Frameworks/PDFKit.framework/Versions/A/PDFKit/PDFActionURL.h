@class NSURL, PDFActionURLPrivateVars;

@interface PDFActionURL : PDFAction <NSCopying> {
    PDFActionURLPrivateVars *_private2;
}

@property (readonly, nonatomic, getter=isSuspiciousURL) BOOL suspiciousURL;
@property (copy, nonatomic) NSURL *URL;

- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)toolTip;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;

@end
