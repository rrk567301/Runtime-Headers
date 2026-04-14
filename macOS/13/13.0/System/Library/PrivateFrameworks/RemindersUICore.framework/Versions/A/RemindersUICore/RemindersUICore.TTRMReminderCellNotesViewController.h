@interface RemindersUICore.TTRMReminderCellNotesViewController : NSObject <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ suggestionMenuUtils;
    void /* unknown type, empty encoding */ notesTextField;
    void /* unknown type, empty encoding */ firstResponderChangeFilter;
    void /* unknown type, empty encoding */ changeDetailCapturer;
    void /* unknown type, empty encoding */ programmaticTextUpdateCounter;
}

- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)init;
- (void).cxx_destruct;

@end
