@class EKUIResizingTextField, NSView, NSString, NSMutableArray;

@interface EKUILabledTextFieldGadget : EKUILabeledGadget <CalUIResizingTextFieldDelegate>

@property (retain) EKUIResizingTextField *baselineField;
@property (retain) NSView *container;
@property (retain) NSMutableArray *textConstraints;
@property (retain) EKUIResizingTextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (double)maxHeight;
- (id)placeholderString;
- (id)control;
- (double)pixelsBetweenLabelAndControl;
- (id)viewForBaselineAlignment;

@end
