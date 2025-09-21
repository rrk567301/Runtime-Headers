@class NSString;

@interface SCRWebAreaNoEchoTextField : SCRTextField {
    unsigned char _shouldEchoValueChanges;
}

@property (retain, nonatomic) NSString *lastStringValue;
@property (nonatomic) unsigned long long lastNumberOfCharacters;

- (void)setSelectedTextRange:(id)a0;
- (id)selectedTextRange;
- (BOOL)isEditable;
- (id)value;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)isTextSelectable;
- (BOOL)hasKeyboardFocus;
- (id)helpDescription;
- (unsigned long long)numberOfCharacters;
- (unsigned long long)cachedNumberOfCharacters;
- (void)setKeyboardFocus:(BOOL)a0;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (BOOL)hasValueChanged;
- (id)_staticTextSupportingTextMarkerRangeSelectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withStartingIndexOffset:(unsigned long long)a1 textArea:(id)a2;
- (id)_staticText_textMarkerRange_selectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textArea:(id)a1;
- (id)_textArea;
- (void)_updateCachedValue;
- (void)appendSelectedStatusDescription:(id)a0;
- (BOOL)canHandleEchoContentChange;
- (BOOL)canHandleTextSelectionChange;
- (BOOL)canHandleTextValueChange;
- (BOOL)canHandleValueChange;
- (BOOL)canNavigateToChildren;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (id)convertTextMarkerRange:(id)a0 toTextArea:(id)a1;
- (id)descriptionForContextualHelp;
- (BOOL)handleReadContentsCallbackForEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)hasAutofillMenuAvailable;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)isSelectionSettable;
- (BOOL)moveToNextParagraphWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToNextSentenceWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToNextWordWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToPreviousParagraphWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToPreviousSentenceWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToPreviousWordWithOutputRequest:(id)a0 event:(id)a1;
- (void)readCurrentLine:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)setShouldEchoValueChanges:(unsigned char)a0;
- (id)shortInstruction;
- (unsigned char)shouldEchoValueChanges;
- (BOOL)shouldOutputClickableState;
- (BOOL)supportsCaretBrowsing;
- (void)synchKeyboardCursorToPosition:(id)a0;
- (id)typeDescriptionForContextualHelp;
- (id)voiceOverCursorTextRange;

@end
