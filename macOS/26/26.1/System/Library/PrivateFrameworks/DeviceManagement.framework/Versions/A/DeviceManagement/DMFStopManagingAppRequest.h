@interface DMFStopManagingAppRequest : DMFAppRequest

@property (nonatomic) BOOL shouldPreserveAppBinary;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
