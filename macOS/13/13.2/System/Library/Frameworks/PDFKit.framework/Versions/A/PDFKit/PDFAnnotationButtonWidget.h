@class PDFAnnotationButtonWidgetPrivateVars;

@interface PDFAnnotationButtonWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationButtonWidgetPrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)a0;
- (long long)rotation;
- (void)setBackgroundColor:(id)a0;
- (id)backgroundColor;
- (id)font;
- (void)setFont:(id)a0;
- (void)commonInit;
- (id)fieldName;
- (id)caption;
- (void)setFieldName:(id)a0;
- (void)setCaption:(id)a0;
- (id)fontColor;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)setFontColor:(id)a0;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)alternateFieldName;
- (void)setAlternateFieldName:(id)a0;
- (long long)controlType;
- (void)setControlType:(long long)a0;
- (BOOL)allowsToggleToOff;
- (void)setAllowsToggleToOff:(BOOL)a0;
- (id)onStateValue;
- (void)setOnStateValue:(id)a0;
- (id)appearanceCharacteristics;

@end
