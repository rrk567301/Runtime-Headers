@class NSSet;

@interface CRKPerformIDSFirewallActionRequest : CATTaskRequest

@property (nonatomic) long long action;
@property (copy, nonatomic) NSSet *allowedAppleIDs;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
