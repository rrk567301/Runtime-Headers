@class NSNumber;

@interface DMFSetAppAllowUserToHideRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *allowUserToHide;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
