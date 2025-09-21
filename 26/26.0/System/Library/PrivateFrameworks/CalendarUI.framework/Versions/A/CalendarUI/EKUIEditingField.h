@class NSString, EKUIGadget;

@interface EKUIEditingField : CalUIAutoCompleteField <CalUIResizingTextFieldDelegate>

@property (weak) EKUIGadget *gadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (id)initWithGadget:(id)a0;
- (void)configureText;

@end
