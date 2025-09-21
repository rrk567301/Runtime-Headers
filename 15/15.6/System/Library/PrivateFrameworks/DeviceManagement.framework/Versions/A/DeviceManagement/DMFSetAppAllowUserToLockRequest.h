@class NSNumber;

@interface DMFSetAppAllowUserToLockRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *allowUserToLock;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
