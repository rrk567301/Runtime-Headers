@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction <NSCopying> {
    PDFActionNamedPrivateVars *_private2;
}

@property (nonatomic) long long name;

- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithName:(long long)a0;
- (void).cxx_destruct;
- (id)toolTip;
- (void)addNameToDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;

@end
