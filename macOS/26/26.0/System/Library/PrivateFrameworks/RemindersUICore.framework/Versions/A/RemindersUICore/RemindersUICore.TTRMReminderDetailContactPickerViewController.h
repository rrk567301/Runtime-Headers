@interface RemindersUICore.TTRMReminderDetailContactPickerViewController : CNContactPickerViewController <CNContactPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ selectionHandler;
    void /* unknown type, empty encoding */ dismissalHandler;
}

- (void)cancelOperation:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)contactPickerViewController:(id)a0 didChooseContact:(id)a1 key:(id)a2 value:(id)a3;
- (void)contactPickerViewControllerDidRequestDismissal:(id)a0;

@end
