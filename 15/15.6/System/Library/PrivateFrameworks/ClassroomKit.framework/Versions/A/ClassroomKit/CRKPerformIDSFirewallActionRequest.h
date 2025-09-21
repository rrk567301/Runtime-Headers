@class NSSet;

@interface CRKPerformIDSFirewallActionRequest : CATTaskRequest

@property (nonatomic) long long action;
@property (copy, nonatomic) NSSet *allowedAppleIDs;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
