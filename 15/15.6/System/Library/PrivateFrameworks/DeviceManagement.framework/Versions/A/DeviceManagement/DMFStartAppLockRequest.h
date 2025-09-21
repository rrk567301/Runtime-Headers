@class NSString;

@interface DMFStartAppLockRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
