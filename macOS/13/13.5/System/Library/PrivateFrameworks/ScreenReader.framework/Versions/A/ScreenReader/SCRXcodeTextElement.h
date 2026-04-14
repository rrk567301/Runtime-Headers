@interface SCRXcodeTextElement : SCRStandardText

@property (nonatomic) BOOL _justInsertedSpaceOnEmptyLine;

- (void)_selectionDidChange:(id)a0;
- (BOOL)_readCharacter:(id)a0 forward:(BOOL)a1;
- (id)attributedStringWithoutPlaceholderSymbolsForString:(id)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (void)handleTextSelectionChange;
- (BOOL)ignoreTextMarkerRange:(id)a0;
- (BOOL)isXcodeTextElement;
- (BOOL)readNextCharacter:(id)a0;
- (BOOL)readPreviousCharacter:(id)a0;
- (id)wordRangeAfterPosition:(id)a0;
- (id)wordRangeBeforePosition:(id)a0;

@end
