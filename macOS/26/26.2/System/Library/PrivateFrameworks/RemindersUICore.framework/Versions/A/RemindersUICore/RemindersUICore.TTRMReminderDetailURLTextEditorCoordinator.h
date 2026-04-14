@interface RemindersUICore.TTRMReminderDetailURLTextEditorCoordinator : NSObject <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ isHandlingReturnKey;
    void /* unknown type, empty encoding */ urlString;
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (id)textView:(id)a0 writablePasteboardTypesForCell:(id)a1 atIndex:(long long)a2;

@end
