@class NSView, MUITokenAddressTextView;

@interface MUITokenAddressField : NSTokenField {
    MUITokenAddressTextView *_addressTextView;
}

@property (weak, nonatomic) NSView *parentAddressField;
@property (readonly, nonatomic) double minimumHeight;

+ (Class)cellClass;

- (void).cxx_destruct;
- (id)accessibilityParent;
- (char)becomeFirstResponder;
- (id)designatedFocusRingView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)resignFirstResponder;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)textView:(id)a0 completions:(id)a1 forPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 indexOfSelectedItem:(long long *)a3;
- (unsigned long long)textView:(id)a0 dragOperationForDraggingInfo:(id)a1 type:(id)a2;
- (char)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)tokenFieldCell:(id)a0 shouldUseDraggingPasteboardTypes:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldUseReadablePasteboardTypes:(id)a1;
- (id)_addressTextView;
- (void)refreshField;

@end
