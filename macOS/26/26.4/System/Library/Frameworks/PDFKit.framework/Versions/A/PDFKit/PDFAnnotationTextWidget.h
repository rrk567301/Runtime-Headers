@class PDFAnnotationTextWidgetPrivateVars;

@interface PDFAnnotationTextWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationTextWidgetPrivateVars *_private2;
}

- (void)setRotation:(int)a0;
- (id)fieldName;
- (long long)rotation;
- (void)setFieldName:(id)a0;
- (void)setStringValue:(id)a0;
- (id)stringValue;
- (BOOL)isReadOnly;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)defaultStringValue;
- (void)setFont:(id)a0;
- (id)font;
- (void)setBackgroundColor:(id)a0;
- (long long)alignment;
- (void).cxx_destruct;
- (BOOL)isMultiline;
- (void)setAlignment:(long long)a0;
- (void)setAttributedStringValue:(id)a0;
- (id)backgroundColor;
- (void)dealloc;
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
