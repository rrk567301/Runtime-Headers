@interface WFFollowUpActionExecutionDialogResponse : WFDialogResponse

@property (nonatomic) char shouldRunFollowUpAction;

+ (char)supportsSecureCoding;
+ (char)supportsBSXPCSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithshouldRunFollowUpAction:(char)a0;

@end
