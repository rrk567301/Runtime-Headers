@interface RemindersUICore.TTRMRemindersListCustomTextStorageTextField : RemindersUICore.TTRMRemindersListTextField {
    void /* unknown type, empty encoding */ supportsStyling;
    void /* unknown type, empty encoding */ disallowedTypingAttributes;
    void /* unknown type, empty encoding */ hashtagTokenEditingBehavior;
    void /* unknown type, empty encoding */ styleTypingAttributeState;
    void /* unknown type, empty encoding */ textStoragePropertiesForFieldEditor;
    void /* unknown type, empty encoding */ isolatedUndoManager;
}

@property (class, nonatomic) Class cellClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(long long)a3;
- (void)textDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)textView:(id)a0 shouldChangeTypingAttributes:(id)a1 toAttributes:(id)a2;
- (void)textViewDidChangeSelection:(id)a0;
- (id)undoManagerForTextView:(id)a0;

@end
