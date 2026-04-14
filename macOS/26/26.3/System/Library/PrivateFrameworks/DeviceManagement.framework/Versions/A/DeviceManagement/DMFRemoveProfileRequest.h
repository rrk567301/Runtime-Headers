@class NSString;

@interface DMFRemoveProfileRequest : DMFTaskRequest

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *profileIdentifier;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
