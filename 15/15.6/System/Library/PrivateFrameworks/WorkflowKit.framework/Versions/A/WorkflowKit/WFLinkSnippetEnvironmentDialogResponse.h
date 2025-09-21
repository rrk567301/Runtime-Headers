@class LNSnippetEnvironment;

@interface WFLinkSnippetEnvironmentDialogResponse : WFDialogResponse

@property (readonly, copy, nonatomic) LNSnippetEnvironment *environment;

+ (char)supportsSecureCoding;
+ (char)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)initWithCancelled:(char)a0;

@end
