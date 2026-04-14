@class NSString, PDFKitPopupViewPrivate;

@interface PDFKitPopupView : NSView <NSTextViewDelegate> {
    PDFKitPopupViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (void)textDidChange:(id)a0;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (id)textView;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (id)undoManagerForTextView:(id)a0;
- (void)_setupPopupView;
- (void)_presentPopupView;
- (void)_presentPopupView_macOS;
- (void)_removeControlForAnnotation;
- (void)_updateParentContents;
- (id)initWithParentAnnotation:(id)a0 owningPageView:(id)a1 owningPDFView:(id)a2;

@end
