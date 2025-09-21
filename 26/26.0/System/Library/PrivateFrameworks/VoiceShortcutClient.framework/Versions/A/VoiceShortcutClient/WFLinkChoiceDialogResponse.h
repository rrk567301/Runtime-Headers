@interface WFLinkChoiceDialogResponse : WFLinkSnippetDialogResponse

@property (readonly, nonatomic) long long selectedButtonIndex;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseCode:(long long)a0 selectedButtonIndex:(long long)a1;

@end
