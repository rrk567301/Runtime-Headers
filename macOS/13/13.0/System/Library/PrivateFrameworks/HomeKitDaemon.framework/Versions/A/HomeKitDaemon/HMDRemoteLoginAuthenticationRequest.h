@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage

@property (nonatomic) unsigned long long targetedAccountType;

+ (BOOL)supportsSecureCoding;
+ (id)messageName;
+ (id)objWithDict:(id)a0;
+ (id)objWithMessage:(id)a0;
+ (id)xpcMessageName;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)messageName;
- (id)messagePayload;
- (id)xpcMessageName;

@end
