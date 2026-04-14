@class NSNumber;

@interface DMFSetAppAllowUserToLockRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *allowUserToLock;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
