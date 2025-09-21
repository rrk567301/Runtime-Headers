@class PDFAnnotationButtonWidgetPrivateVars;

@interface PDFAnnotationButtonWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationButtonWidgetPrivateVars *_private2;
}

- (void)setState:(long long)a0;
- (id)font;
- (long long)state;
- (void)commonInit;
- (id)fieldName;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)a0;
- (id)caption;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)rotation;
- (void)setFont:(id)a0;
- (void)setFieldName:(id)a0;
- (void)setCaption:(id)a0;
- (void).cxx_destruct;
- (long long)controlType;
- (id)fontColor;
- (void)setFontColor:(id)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)allowsToggleToOff;
- (void)setControlType:(long long)a0;
- (id)alternateFieldName;
- (id)appearanceCharacteristics;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (id)onStateValue;
- (void)setAllowsToggleToOff:(BOOL)a0;
- (void)setAlternateFieldName:(id)a0;
- (void)setOnStateValue:(id)a0;

@end
