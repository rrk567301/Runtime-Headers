@class NSArray, PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction <NSCopying> {
    PDFActionResetFormPrivateVars *_private2;
}

@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) char fieldsIncludedAreCleared;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)toolTip;
- (void)commonInit;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;

@end
