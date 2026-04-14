@interface EKUIUnlabelledCommentGadget : EKUISingleTextFieldGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (id)iconSymbolName;
- (BOOL)needsExpansion;
- (id)placeholderText;
- (id)_responseCommentForDisplay;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
