@class NSNumber;

@interface DMFSetAppRemovabilityRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *removable;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
