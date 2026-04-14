@interface WFFollowUpActionExecutionDialogResponse : WFDialogResponse

@property (nonatomic) BOOL shouldRunFollowUpAction;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithshouldRunFollowUpAction:(BOOL)a0;

@end
