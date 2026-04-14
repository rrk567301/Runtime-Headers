@interface SCRWebAreaNoEchoTextField : SCRTextField

- (id)value;
- (id)typeDescription;
- (BOOL)isEditable;
- (id)selectedTextRange;
- (BOOL)isTextSelectable;
- (id)helpDescription;
- (void)setSelectedTextRange:(id)a0;
- (unsigned long long)numberOfCharacters;
- (unsigned long long)cachedNumberOfCharacters;
- (BOOL)moveToPreviousWordWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToNextWordWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToPreviousSentenceWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToNextSentenceWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToPreviousParagraphWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToNextParagraphWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)supportsCaretBrowsing;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (void)appendSelectedStatusDescription:(id)a0;
- (BOOL)canHandleValueChange;
- (BOOL)handleReadContentsCallbackForEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (id)descriptionForContextualHelp;
- (id)shortInstruction;
- (BOOL)isSelectionSettable;
- (void)synchKeyboardCursorToPosition:(id)a0;
- (BOOL)canHandleEchoContentChange;
- (BOOL)canHandleTextSelectionChange;
- (BOOL)canHandleTextValueChange;
- (void)readCurrentLine:(id)a0;
- (BOOL)shouldOutputClickableState;
- (BOOL)hasAutofillMenuAvailable;
- (id)_staticTextSupportingTextMarkerRangeSelectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withStartingIndexOffset:(unsigned long long)a1 textArea:(id)a2;
- (void)_updateCachedValue;
- (id)_textArea;
- (id)_staticText_textMarkerRange_selectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textArea:(id)a1;

@end
