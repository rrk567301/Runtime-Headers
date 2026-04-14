@class NSNumber;

@interface DMFSetAppAllowUserToHideRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *allowUserToHide;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
