@interface WFLinkSnippetActionDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSnippetAction:(id)a0 attribution:(id)a1 encodedSnippetActionToolInvocation:(id)a2;

@end
