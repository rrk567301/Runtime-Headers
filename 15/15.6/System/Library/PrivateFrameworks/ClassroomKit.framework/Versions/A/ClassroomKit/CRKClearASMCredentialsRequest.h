@interface CRKClearASMCredentialsRequest : CATTaskRequest

@property (nonatomic) long long role;
@property (nonatomic) long long type;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
