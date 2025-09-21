@interface RemindersUICore.TTRMRemindersListTextField : NSTextField {
    void /* unknown type, empty encoding */ hasFocus;
    void /* unknown type, empty encoding */ useNextResponderUndoManagerForTextView;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)textDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)a0;
- (BOOL)abortEditing;
- (void)resetCursorRects;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
