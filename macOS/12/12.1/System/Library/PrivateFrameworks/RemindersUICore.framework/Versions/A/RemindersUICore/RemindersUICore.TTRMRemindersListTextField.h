@interface RemindersUICore.TTRMRemindersListTextField : NSTextField <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ hasFocus;
    void /* unknown type, empty encoding */ useNextResponderUndoManagerForTextView;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)resetCursorRects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)abortEditing;
- (BOOL)becomeFirstResponder;
- (void)textDidChange:(id)a0;

@end
