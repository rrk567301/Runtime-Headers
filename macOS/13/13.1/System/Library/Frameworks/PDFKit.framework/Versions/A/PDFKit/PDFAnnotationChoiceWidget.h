@class PDFAnnotationChoiceWidgetPrivateVars;

@interface PDFAnnotationChoiceWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationChoiceWidgetPrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (id)defaultStringValue;
- (long long)rotation;
- (void)setStringValue:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (id)backgroundColor;
- (id)font;
- (void)setFont:(id)a0;
- (void)commonInit;
- (id)fieldName;
- (void)setFieldName:(id)a0;
- (id)fontColor;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)choices;
- (void)setFontColor:(id)a0;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (void)setDefaultStringValue:(id)a0;
- (BOOL)isListChoice;
- (void)setChoices:(id)a0;
- (id)alternateFieldName;
- (void)setAlternateFieldName:(id)a0;
- (void)setIsListChoice:(BOOL)a0;
- (id)textForValue:(id)a0;

@end
