@class PDFFormFieldPrivateVars;

@interface PDFFormField : NSObject <NSCopying> {
    PDFFormFieldPrivateVars *_private;
}

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (id)defaultStringValue;
- (void)setStringValue:(id)a0;
- (id)document;
- (int)fieldType;
- (void)setButtonType:(long long)a0;
- (void)setDocument:(id)a0;
- (void)commonInit;
- (id)fieldName;
- (long long)buttonType;
- (void)setFieldName:(id)a0;
- (void)setFieldType:(int)a0;
- (struct __CFDictionary { } *)createDictionaryRef;
- (BOOL)writeDefaultValue;
- (id)initWithAnnotation:(id)a0;
- (id)initWithFormDictionary:(struct CGPDFDictionary { } *)a0;
- (void)clearDictionaryRef;
- (struct __CFDictionary { } *)dictionaryRef;
- (void)commonCreateDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)setDefaultStringValue:(id)a0;
- (void)setWriteDefaultValue:(BOOL)a0;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary { } *)a0;
- (BOOL)_isRedacted;

@end
