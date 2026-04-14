@class NSString, PDFKitTextViewPrivate;

@interface PDFKitTextView : NSObject <NSTextViewDelegate> {
    PDFKitTextViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityTitleUIElement;
- (id)layer;
- (BOOL)becomeFirstResponder;
- (void)removeFromSuperview;
- (void)textDidChange:(id)a0;
- (void)rotateByAngle:(double)a0;
- (void)_setup;
- (void)_setFont:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (id)textView;
- (id)annotation;
- (id)initWithAnnotation:(id)a0 pdfPageView:(id)a1 pdfView:(id)a2;
- (BOOL)handleTab;
- (BOOL)handleBackTab;
- (void)_setString:(id)a0;
- (void)_setFontColor:(id)a0;
- (void)_setAlignment:(long long)a0;
- (void)_setupTopLevelView;
- (void)_setAttributedString:(id)a0;
- (void)_updateScaleFactor;
- (void)_applyScale:(double)a0 toView:(id)a1;
- (void)_didChangeZoomFactor:(id)a0;

@end
