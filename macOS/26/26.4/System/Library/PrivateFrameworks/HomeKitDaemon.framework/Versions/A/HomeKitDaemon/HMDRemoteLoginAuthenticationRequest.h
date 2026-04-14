@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage

@property (nonatomic) unsigned long long targetedAccountType;

+ (BOOL)supportsSecureCoding;
+ (id)messageName;
+ (id)objWithMessage:(id)a0;
+ (id)objWithDict:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)messagePayload;
- (id)messageName;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
