@class NSTextField;

@interface _NSTextFieldTokensController : NSTextTokensController

@property (retain) NSTextField *textField;

- (void)setTokens:(id)a0;
- (id)tokens;
- (void).cxx_destruct;
- (id)initWithTextField:(id)a0;
- (id)untokenizedText;
- (void)replaceUntokenizedTextWithToken:(id)a0;
- (void)setUntokenizedText:(id)a0;

@end
