@class NSAttributedString;

@interface WorkflowUICore.AppKitTextField : NSTextField <WFVariableAttachmentViewStorage, WFAppKitAutocompleteTextViewDelegate> {
    void /* unknown type, empty encoding */ cells;
    void /* unknown type, empty encoding */ additionalDelegate;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, retain) NSAttributedString *attributedStringValue;

- (void)removeCellViewAtCharacterIndex:(long long)a0;
- (void)addCellView:(id)a0 forCharacterIndex:(long long)a1;
- (id)cellViewAtCharacterIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textDidBeginEditing:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (void)textView:(id)a0 clickedOnCell:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atIndex:(long long)a3;
- (id)undoManagerForTextView:(id)a0;
- (void)textViewDidBecomeFirstResponder:(id)a0;
- (void)textViewDidResignFirstResponder:(id)a0;
- (BOOL)textViewDidCut:(id)a0;
- (BOOL)textViewDidCopy:(id)a0;
- (BOOL)textViewDidPaste:(id)a0;

@end
