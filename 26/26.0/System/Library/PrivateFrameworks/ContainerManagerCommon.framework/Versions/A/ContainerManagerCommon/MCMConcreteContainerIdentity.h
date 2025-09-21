@class NSUUID, MCMUserIdentity, NSString;
@protocol MCMContainerConfiguration;

@interface MCMConcreteContainerIdentity : MCMContainerIdentity <MCMConcreteContainerIdentity>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL transient;
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

+ (id)concreteContainerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 transient:(BOOL)a5 userIdentityCache:(id)a6 error:(unsigned long long *)a7;
+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 userIdentityCache:(id)a5 error:(unsigned long long *)a6;

- (BOOL)isEqualToConcreteContainerIdentity:(id)a0;
- (struct container_object_s { } *)createLibsystemContainerWithContainerPathIdentifier:(id)a0 existed:(BOOL)a1 error:(unsigned long long *)a2;
- (id)containerIdentity;
- (id)initWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 transient:(BOOL)a5 userIdentityCache:(id)a6 error:(unsigned long long *)a7;
- (id)initWithContainerIdentity:(id)a0 UUID:(id)a1 error:(unsigned long long *)a2;
- (id)initWithPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)initWithVersion1PlistDictionary:(id)a0 containerIdentity:(id)a1 error:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)plist;
- (id)init;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
