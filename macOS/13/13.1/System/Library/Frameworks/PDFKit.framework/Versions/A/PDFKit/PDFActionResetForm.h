@class NSArray, PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction <NSCopying> {
    PDFActionResetFormPrivateVars *_private2;
}

@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) BOOL fieldsIncludedAreCleared;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)toolTip;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (const struct __CFDictionary { } *)createDictionaryRef;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary { } *)a0;

@end
