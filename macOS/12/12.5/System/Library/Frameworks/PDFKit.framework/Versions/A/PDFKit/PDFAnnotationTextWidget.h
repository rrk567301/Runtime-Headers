@class PDFAnnotationTextWidgetPrivateVars;

@interface PDFAnnotationTextWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationTextWidgetPrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)stringValue;
- (void).cxx_destruct;
- (id)defaultStringValue;
- (void)setAlignment:(long long)a0;
- (long long)rotation;
- (long long)alignment;
- (void)setStringValue:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (id)backgroundColor;
- (id)font;
- (void)setFont:(id)a0;
- (id)attributedStringValue;
- (void)setAttributedStringValue:(id)a0;
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
- (id)alternateFieldName;
- (void)setFontColor:(id)a0;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (void)setDefaultStringValue:(id)a0;
- (void)setAlternateFieldName:(id)a0;
- (unsigned long long)maximumLength;
- (void)setIsMultiline:(BOOL)a0;

@end
