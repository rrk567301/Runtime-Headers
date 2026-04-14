@class PDFAnnotationButtonWidgetPrivateVars;

@interface PDFAnnotationButtonWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationButtonWidgetPrivateVars *_private2;
}

- (void)setFieldName:(id)a0;
- (long long)rotation;
- (id)fieldName;
- (void)commonInit;
- (long long)state;
- (void)setCaption:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)font;
- (void)setFont:(id)a0;
- (id)caption;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)setState:(long long)a0;
- (void)setBackgroundColor:(id)a0;
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
