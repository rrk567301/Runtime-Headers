@class PDFAnnotationChoiceWidgetPrivateVars;

@interface PDFAnnotationChoiceWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationChoiceWidgetPrivateVars *_private2;
}

- (long long)rotation;
- (void)commonInit;
- (void)setStringValue:(id)a0;
- (void)setFont:(id)a0;
- (id)defaultStringValue;
- (void)setBackgroundColor:(id)a0;
- (id)backgroundColor;
- (id)fieldName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFieldName:(id)a0;
- (id)stringValue;
- (id)font;
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
