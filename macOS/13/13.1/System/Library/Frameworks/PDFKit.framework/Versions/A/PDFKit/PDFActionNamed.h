@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction <NSCopying> {
    PDFActionNamedPrivateVars *_private2;
}

@property (nonatomic) long long name;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithName:(long long)a0;
- (id)toolTip;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)addNameToDictionaryRef:(struct __CFDictionary { } *)a0;

@end
