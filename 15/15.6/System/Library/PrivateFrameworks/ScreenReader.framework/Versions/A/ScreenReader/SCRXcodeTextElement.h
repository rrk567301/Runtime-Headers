@interface SCRXcodeTextElement : SCRStandardText

- (void)_selectionDidChange:(id)a0;
- (id)textualContext;
- (char)_readCharacter:(id)a0 forward:(char)a1;
- (char)_shouldReadBetweenPreviousAndCurrentSelectionWithRange:(id)a0;
- (void)addLineInfoSummaryToRequest:(id)a0;
- (id)attributedStringWithoutPlaceholderSymbolsForString:(id)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (void)handleTextSelectionChange;
- (char)ignoreTextMarkerRange:(id)a0;
- (char)isXcodeTextElement;
- (char)readNextCharacter:(id)a0;
- (char)readPreviousCharacter:(id)a0;
- (id)wordRangeAfterPosition:(id)a0;
- (id)wordRangeBeforePosition:(id)a0;

@end
