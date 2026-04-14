@class PDFAnnotationTextWidgetPrivateVars;

@interface PDFAnnotationTextWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationTextWidgetPrivateVars *_private2;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (id)defaultStringValue;
- (long long)rotation;
- (long long)alignment;
- (void)setStringValue:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (id)backgroundColor;
- (id)font;
- (void)setFont:(id)a0;
- (void)setAttributedStringValue:(id)a0;
- (id)attributedStringValue;
- (void)setRotation:(int)a0;
- (BOOL)isReadOnly;
- (void)commonInit;
- (id)fieldName;
- (void)setFieldName:(id)a0;
- (BOOL)isMultiline;
- (void)setMaximumLength:(unsigned long long)a0;
- (void)setIsReadOnly:(BOOL)a0;
- (id)fontColor;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)setFontColor:(id)a0;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (void)setDefaultStringValue:(id)a0;
- (id)alternateFieldName;
- (void)setAlternateFieldName:(id)a0;
- (unsigned long long)maximumLength;
- (void)setIsMultiline:(BOOL)a0;

@end
