@class NSArray;

@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest

@property (copy, nonatomic) NSArray *associatedDomains;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
