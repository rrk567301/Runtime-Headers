@class NSString, PDFKitPopupViewPrivate;

@interface PDFKitPopupView : NSView <NSTextViewDelegate> {
    PDFKitPopupViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textDidChange:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)removeFromSuperview;
- (id)textView;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (id)undoManagerForTextView:(id)a0;
- (void)_setupPopupView;
- (void)_presentPopupView;
- (void)_presentPopupView_macOS;
- (void)_removeControlForAnnotation;
- (void)_updateParentContents;
- (id)initWithParentAnnotation:(id)a0 owningPageView:(id)a1 owningPDFView:(id)a2;

@end
