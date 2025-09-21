@class NSString;

@interface CRKRenewAppleIDCredentialsRequest : CATTaskRequest

@property (nonatomic) char force;
@property (copy, nonatomic) NSString *reason;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
