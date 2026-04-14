@class NSTouchBar;

@interface TextFieldEditor : NSTextView {
    NSTouchBar *_emptyFunctionBar;
}

@property (readonly) BOOL pasteReplacesTabsWithSpaces;

- (void)doCommandBySelector:(SEL)a0;
- (id)touchBar;
- (void)paste:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pasteAsPlainText:(id)a0;
- (void)_replaceWhitespaceCharactersAfterPaste;
- (void)disableDFRAccessories;

@end
