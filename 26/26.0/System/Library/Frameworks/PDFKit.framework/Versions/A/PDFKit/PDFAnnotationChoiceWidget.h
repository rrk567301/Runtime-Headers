@class PDFAnnotationChoiceWidgetPrivateVars;

@interface PDFAnnotationChoiceWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationChoiceWidgetPrivateVars *_private2;
}

- (id)font;
- (void)commonInit;
- (id)fieldName;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)a0;
- (id)defaultStringValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStringValue:(id)a0;
- (long long)rotation;
- (id)stringValue;
- (void)setFont:(id)a0;
- (void)setFieldName:(id)a0;
- (void).cxx_destruct;
- (id)fontColor;
- (void)setFontColor:(id)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)choices;
- (id)alternateFieldName;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (BOOL)isListChoice;
- (void)setAlternateFieldName:(id)a0;
- (void)setChoices:(id)a0;
- (void)setDefaultStringValue:(id)a0;
- (void)setIsListChoice:(BOOL)a0;
- (id)textForValue:(id)a0;

@end
