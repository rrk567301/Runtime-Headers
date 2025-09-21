@class NSMutableArray;
@protocol ECMessageBodyElement_Private;

@interface ECMessageBodyOriginalTextSubparser : ECMessageBodySubparser {
    NSMutableArray *_lastTextElements;
    id<ECMessageBodyElement_Private> _lastNonWhitespaceTextElement;
    id /* block */ _foundTextBlock;
    id /* block */ _foundWhitespaceBlock;
    char _foundText;
    char _foundForwardSeparator;
}

- (void)dealloc;
- (void)_consumeAnyLastTextElementAsAttribution:(char)a0;
- (void)_consumeTextElement:(id)a0 isAttribution:(char)a1;
- (char)_isElementQuotedForwardSeparator:(id)a0;
- (void)messageBodyParser:(id)a0 foundMessageBodyElement:(id)a1;
- (void)messageBodyParserDidFinishParsing:(id)a0;
- (void)setFoundTextBlock:(id /* block */)a0;
- (void)setFoundWhitespaceBlock:(id /* block */)a0;

@end
