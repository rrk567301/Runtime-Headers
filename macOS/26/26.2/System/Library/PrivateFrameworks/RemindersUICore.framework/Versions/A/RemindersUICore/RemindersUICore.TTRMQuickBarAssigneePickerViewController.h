@interface RemindersUICore.TTRMQuickBarAssigneePickerViewController : NSViewController <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ pickerView;
    void /* unknown type, empty encoding */ suggestionMenuUtils;
}

- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
