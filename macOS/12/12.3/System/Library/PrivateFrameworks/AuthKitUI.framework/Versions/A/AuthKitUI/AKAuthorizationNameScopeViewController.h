@class NSTextField, NSString, NSArray, NSLayoutConstraint, NSButton;
@protocol AKAuthorizationNameScopeViewControllerDelegate;

@interface AKAuthorizationNameScopeViewController : NSViewController <AKNameTextFieldDelegate, NSTextFieldDelegate>

@property (copy) NSString *internalScopeString;
@property (copy) NSString *internalValueString;
@property BOOL internalIsEditingName;
@property (weak) id<AKAuthorizationNameScopeViewControllerDelegate> delegate;
@property unsigned long long fieldType;
@property BOOL hasClearButton;
@property unsigned long long selectionStyle;
@property double valueLeadingInset;
@property (copy) NSString *scopeString;
@property (copy) NSString *valueString;
@property (readonly) NSTextField *scopeLabel;
@property (readonly) NSTextField *valueLabel;
@property (readonly) NSButton *clearButton;
@property (readonly) NSLayoutConstraint *viewHeightConstraint;
@property (nonatomic, getter=isEditingName) BOOL editingName;
@property (readonly) NSArray *editValueLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (void)setEditingName:(BOOL)a0 animated:(BOOL)a1;
- (void)_transitionToEditingNameAnimated:(BOOL)a0;
- (void)_transitionFromEditingNameAnimated:(BOOL)a0;
- (id)_newTextField;
- (void)textFieldDidBecomeFirstResponder:(id)a0;
- (void)_setupValueLabelEditable:(BOOL)a0;
- (void)_setupEditValueLabels:(unsigned long long)a0;
- (id)_newClearTextButton;
- (void)_setEditingNameAlphaValue:(double)a0 animated:(BOOL)a1;
- (void)_delegate_didSelectEditClear:(BOOL)a0;
- (void)_initTextField:(id)a0;
- (id)_newValueLabelEditable:(BOOL)a0;
- (void)_handleReturnInTextField:(id)a0;
- (id)_newNameTextField;
- (void)handleClearText:(id)a0;
- (unsigned long long)_indexOfEditableField:(id)a0;
- (void)_delegate_didChangeEditableFieldAtIndex:(unsigned long long)a0;
- (void)_delegate_didEndEditingFieldAtIndex:(unsigned long long)a0;

@end
