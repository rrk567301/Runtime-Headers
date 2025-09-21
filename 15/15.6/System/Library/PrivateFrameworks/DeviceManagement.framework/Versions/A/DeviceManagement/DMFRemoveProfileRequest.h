@class NSString;

@interface DMFRemoveProfileRequest : DMFTaskRequest

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *profileIdentifier;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
