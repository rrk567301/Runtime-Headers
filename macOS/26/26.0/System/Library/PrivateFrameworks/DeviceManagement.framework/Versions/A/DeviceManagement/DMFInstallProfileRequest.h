@class NSString, NSData;

@interface DMFInstallProfileRequest : DMFTaskRequest

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *managingProfileIdentifier;
@property (copy, nonatomic) NSData *profileData;
@property (copy, nonatomic) NSString *personaID;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
