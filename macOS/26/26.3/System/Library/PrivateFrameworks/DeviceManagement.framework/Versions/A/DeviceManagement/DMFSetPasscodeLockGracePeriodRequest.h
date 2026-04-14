@interface DMFSetPasscodeLockGracePeriodRequest : DMFTaskRequest

@property (nonatomic) double seconds;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
