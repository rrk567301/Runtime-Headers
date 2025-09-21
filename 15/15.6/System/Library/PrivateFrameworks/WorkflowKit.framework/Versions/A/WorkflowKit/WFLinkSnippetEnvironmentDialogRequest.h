@interface WFLinkSnippetEnvironmentDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char siriRequest;
@property (readonly, nonatomic) char hasDialog;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttribution:(id)a0 prompt:(id)a1 siriRequest:(char)a2 hasDialog:(char)a3;

@end
