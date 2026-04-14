@class NSString, PDFActionPrivate;

@interface PDFAction : NSObject <NSCopying> {
    PDFActionPrivate *_private;
}

@property (readonly, nonatomic) NSString *type;

+ (id)actionWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
+ (Class)_classForActionDictionary:(struct CGPDFDictionary { } *)a0;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setType:(id)a0;
- (id)toolTip;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)toolTipNoLabel;
- (id)nextActions;
- (void)_setNextActions:(id)a0;
- (void)_setNextAction:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (void)_setNextActions:(struct CGPDFArray { } *)a0 forDocument:(id)a1 forPage:(id)a2;
- (id)baseURLForDocument:(id)a0;

@end
