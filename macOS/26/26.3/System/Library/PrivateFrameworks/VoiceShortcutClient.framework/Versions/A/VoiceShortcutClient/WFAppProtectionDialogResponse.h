@interface WFAppProtectionDialogResponse : WFDialogResponse

@property (readonly, nonatomic) unsigned long long requestResponseCode;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResponseCode:(unsigned long long)a0;

@end
