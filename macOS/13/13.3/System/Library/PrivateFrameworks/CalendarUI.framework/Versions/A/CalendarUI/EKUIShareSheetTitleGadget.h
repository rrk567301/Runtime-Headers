@class EKUIResizingTextField, NSString;

@interface EKUIShareSheetTitleGadget : EKUISingleViewGadget <CalUIResizingTextFieldDelegate>

@property (retain) EKUIResizingTextField *titleField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)initWithViewController:(id)a0;
- (BOOL)needsExpansion;
- (double)maxHeight;
- (id)control;
- (BOOL)isObjectEditable;
- (id)objectTitle;
- (BOOL)shouldDisplay;
- (void)updateObject;
- (void)updateTitle:(id)a0;
- (void)updateWithChanges:(id)a0;

@end
