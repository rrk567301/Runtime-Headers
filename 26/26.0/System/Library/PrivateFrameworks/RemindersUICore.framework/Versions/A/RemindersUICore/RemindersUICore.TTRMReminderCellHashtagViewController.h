@interface RemindersUICore.TTRMReminderCellHashtagViewController : NSObject <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ hashtagsAttributedText;
    void /* unknown type, empty encoding */ hashtagsOverrideFont;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ suggestionMenuUtils;
    void /* unknown type, empty encoding */ hashtagsFallbackColor;
    void /* unknown type, empty encoding */ hashtagsTextField;
    void /* unknown type, empty encoding */ hashtagsStaticLabel;
    void /* unknown type, empty encoding */ firstResponderChangeFilter;
    void /* unknown type, empty encoding */ lastTextChangeDetail;
    void /* unknown type, empty encoding */ programmaticTextUpdateCounter;
    void /* unknown type, empty encoding */ baseTextStyleOverrides;
}

- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)init;
- (void).cxx_destruct;

@end
