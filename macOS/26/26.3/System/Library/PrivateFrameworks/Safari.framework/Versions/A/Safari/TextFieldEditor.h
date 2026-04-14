@class NSTouchBar;

@interface TextFieldEditor : NSTextView {
    NSTouchBar *_emptyFunctionBar;
}

@property (readonly) BOOL pasteReplacesTabsWithSpaces;

- (id)touchBar;
- (void)paste:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)doCommandBySelector:(SEL)a0;
- (void)pasteAsPlainText:(id)a0;
- (void)_replaceWhitespaceCharactersAfterPaste;
- (void)disableDFRAccessories;

@end
