@class NSTouchBar;

@interface TextFieldEditor : NSTextView {
    NSTouchBar *_emptyFunctionBar;
}

@property (readonly) BOOL pasteReplacesTabsWithSpaces;

- (id)init;
- (void).cxx_destruct;
- (id)touchBar;
- (void)doCommandBySelector:(SEL)a0;
- (void)paste:(id)a0;
- (BOOL)canSmoothFontsInLayer;
- (void)pasteAsPlainText:(id)a0;
- (void)disableDFRAccessories;
- (void)_replaceWhitespaceCharactersAfterPaste;

@end
