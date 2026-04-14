@class PDFAnnotationTextWidgetPrivateVars;

@interface PDFAnnotationTextWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationTextWidgetPrivateVars *_private2;
}

- (void)setFont:(id)a0;
- (id)fieldName;
- (void)setStringValue:(id)a0;
- (void)setFieldName:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (BOOL)isReadOnly;
- (long long)rotation;
- (void)commonInit;
- (void)setRotation:(int)a0;
- (id)stringValue;
- (id)backgroundColor;
- (long long)alignment;
- (void)setAttributedStringValue:(id)a0;
- (void)setAlignment:(long long)a0;
- (id)defaultStringValue;
- (id)font;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isMultiline;
- (id)attributedStringValue;
- (id)fontColor;
- (void)setMaximumLength:(unsigned long long)a0;
- (void)setFontColor:(id)a0;
- (void)setIsReadOnly:(BOOL)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)setIsMultiline:(BOOL)a0;
- (id)alternateFieldName;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (unsigned long long)maximumLength;
- (void)setAlternateFieldName:(id)a0;
- (void)setDefaultStringValue:(id)a0;

@end
