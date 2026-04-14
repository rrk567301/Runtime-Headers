@class PDFFormFieldPrivateVars;

@interface PDFFormField : NSObject <NSCopying> {
    PDFFormFieldPrivateVars *_private;
}

- (void)setDocument:(id)a0;
- (id)fieldName;
- (long long)buttonType;
- (void)setFieldName:(id)a0;
- (void)setStringValue:(id)a0;
- (id)stringValue;
- (void)commonInit;
- (int)fieldType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)defaultStringValue;
- (void)setButtonType:(long long)a0;
- (id)document;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
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
