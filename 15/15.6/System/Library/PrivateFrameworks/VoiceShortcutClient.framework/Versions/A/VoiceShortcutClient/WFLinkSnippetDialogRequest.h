@class LNViewSnippet;

@interface WFLinkSnippetDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet;
@property (readonly, nonatomic) char showPrompt;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithViewSnippet:(id)a0 attribution:(id)a1 showPrompt:(char)a2;

@end
