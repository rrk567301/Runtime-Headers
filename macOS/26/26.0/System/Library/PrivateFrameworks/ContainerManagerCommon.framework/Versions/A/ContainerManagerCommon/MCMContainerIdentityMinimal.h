@class MCMUserIdentity, NSString;
@protocol MCMUserIdentityCache, MCMContainerConfiguration;

@interface MCMContainerIdentityMinimal : NSObject <MCMContainerIdentityMinimal>

@property (readonly, nonatomic) id<MCMUserIdentityCache> userIdentityCache;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly, nonatomic) id<MCMContainerConfiguration> containerConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isDataSeparated) BOOL dataSeparated;
@property (readonly, nonatomic, getter=isExplicitlyPersonal) BOOL explicitlyPersonal;
@property (readonly, nonatomic) NSString *personaIdentifier;

+ (id)minimalContainerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;

- (id)initWithVersion1PlistDictionary:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)identityByChangingUserIdentity:(id)a0;
- (id)initWithPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (BOOL)isEqualToContainerIdentity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)plist;
- (id)init;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)minimalIdentity;
- (id)identityBySettingPlatform:(unsigned int)a0;
- (id)initWithUserIdentity:(id)a0 identifier:(id)a1 containerConfig:(id)a2 platform:(unsigned int)a3 userIdentityCache:(id)a4 error:(unsigned long long *)a5;

@end
