@class NSNumber;

@interface DMFSetAppRemovabilityRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *removable;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
