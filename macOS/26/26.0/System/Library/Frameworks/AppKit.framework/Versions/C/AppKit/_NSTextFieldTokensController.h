@class NSTextField;

@interface _NSTextFieldTokensController : NSTextTokensController

@property (retain) NSTextField *textField;

- (id)initWithTextField:(id)a0;
- (id)tokens;
- (void)setTokens:(id)a0;
- (void).cxx_destruct;
- (id)untokenizedText;
- (void)replaceUntokenizedTextWithToken:(id)a0;
- (void)setUntokenizedText:(id)a0;

@end
