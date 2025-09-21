@interface WFRequestAuthorizationDialogResponse : WFDialogResponse

@property (readonly, nonatomic) unsigned long long result;

+ (char)supportsSecureCoding;
+ (char)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(unsigned long long)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithResponseCode:(long long)a0;
- (id)initWithResult:(unsigned long long)a0 cancelled:(char)a1;

@end
