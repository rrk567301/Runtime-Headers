@class NSString, NSUUID, MCMUserIdentity;
@protocol MCMContainerConfiguration;

@interface MCMConcreteContainerIdentityForLibsystem : MCMConcreteContainerIdentity <MCMConcreteContainerIdentityForLibsystem>

@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) BOOL existed;
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

+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 containerPathIdentifier:(id)a5 existed:(BOOL)a6 transient:(BOOL)a7 userIdentityCache:(id)a8 error:(unsigned long long *)a9;

- (struct container_object_s { } *)createLibsystemContainerWithError:(unsigned long long *)a0;
- (id)nontransientContainerIdentity;
- (id)transientContainerIdentity;
- (id)identityByChangingTransient:(BOOL)a0;
- (id)identityByChangingIdentifier:(id)a0;
- (id)identityByChangingContainerPathIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nontransientConcreteContainerIdentityForLibsystem;
- (id)init;
- (id)transientConcreteContainerIdentityForLibsystem;
- (id)initWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerConfig:(id)a3 platform:(unsigned int)a4 containerPathIdentifier:(id)a5 existed:(BOOL)a6 transient:(BOOL)a7 userIdentityCache:(id)a8 error:(unsigned long long *)a9;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)identityByChangingUUID:(id)a0;
- (void).cxx_destruct;

@end
