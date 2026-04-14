@interface RemindersUICore.TTRReminderTextStorage : TTRReminderBaseTextStorage {
    void /* unknown type, empty encoding */ baseTextStyles;
    void /* unknown type, empty encoding */ uncommittedHashtagTextStyles;
    void /* unknown type, empty encoding */ committedHashtagTextStyles;
    void /* unknown type, empty encoding */ foreignHashtagTextStyles;
    void /* unknown type, empty encoding */ harvestedResultTextStyles;
    void /* unknown type, empty encoding */ hashtagVisibility;
    void /* unknown type, empty encoding */ showsAsTransparent;
    void /* unknown type, empty encoding */ debug_nonEditableTextStyles;
    void /* unknown type, empty encoding */ debug_highlightNonEditableTexts;
}

- (void)processEditing;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;

@end
