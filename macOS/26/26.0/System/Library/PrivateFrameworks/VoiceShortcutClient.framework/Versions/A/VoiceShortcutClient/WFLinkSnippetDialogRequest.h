@class NSData, LNViewSnippet, LNAction;

@interface WFLinkSnippetDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet;
@property (readonly, copy, nonatomic) LNAction *snippetAction;
@property (readonly, copy, nonatomic) NSData *encodedSnippetActionToolInvocation;
@property (readonly, nonatomic) BOOL showPrompt;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewSnippet:(id)a0 snippetAction:(id)a1 encodedSnippetActionToolInvocation:(id)a2 attribution:(id)a3 showPrompt:(BOOL)a4;

@end
