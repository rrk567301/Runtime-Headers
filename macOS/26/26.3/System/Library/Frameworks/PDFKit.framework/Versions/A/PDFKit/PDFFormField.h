@class PDFFormFieldPrivateVars;

@interface PDFFormField : NSObject <NSCopying> {
    PDFFormFieldPrivateVars *_private;
}

- (void)setDocument:(id)a0;
- (void)commonInit;
- (void)setStringValue:(id)a0;
- (long long)buttonType;
- (id)defaultStringValue;
- (id)description;
- (int)fieldType;
- (id)document;
- (id)fieldName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFieldName:(id)a0;
- (id)stringValue;
- (void)setButtonType:(long long)a0;
- (void)setFieldType:(int)a0;
- (BOOL)_isRedacted;
- (void)addDictionaryValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)clearDictionaryRef;
- (void)commonCreateDictionaryRef:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (struct __CFDictionary { } *)dictionaryRef;
- (id)initWithAnnotation:(id)a0;
- (id)initWithFormDictionary:(struct CGPDFDictionary { } *)a0;
- (void)setDefaultStringValue:(id)a0;
- (void)setWriteDefaultValue:(BOOL)a0;
- (BOOL)writeDefaultValue;

@end
