@interface DMFSetPasscodeLockGracePeriodRequest : DMFTaskRequest

@property (nonatomic) double seconds;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
