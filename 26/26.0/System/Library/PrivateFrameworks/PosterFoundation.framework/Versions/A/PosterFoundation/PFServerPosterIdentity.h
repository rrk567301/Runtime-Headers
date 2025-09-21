@class NSString, NSUUID;

@interface PFServerPosterIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isIncomingConfiguration;
@property (readonly, copy, nonatomic) NSUUID *posterUUID;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long supplement;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSString *stablePersistenceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)debugDescription;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)configurationIdentityWithProvider:(id)a0 identifier:(id)a1 role:(id)a2 posterUUID:(id)a3 version:(unsigned long long)a4 supplement:(unsigned long long)a5;
+ (void)_setDisableUniquing:(BOOL)a0;
+ (id)descriptorIdentityWithProvider:(id)a0 identifier:(id)a1 role:(id)a2 posterUUID:(id)a3 version:(unsigned long long)a4;
+ (id)incomingConfigurationIdentityWithProvider:(id)a0 role:(id)a1 posterUUID:(id)a2 version:(unsigned long long)a3 supplement:(unsigned long long)a4;
+ (id)staticDescriptorIdentityWithProvider:(id)a0 identifier:(id)a1 role:(id)a2 posterUUID:(id)a3 version:(unsigned long long)a4;
+ (id)suggestionDescriptorIdentityWithProvider:(id)a0 identifier:(id)a1 role:(id)a2 posterUUID:(id)a3 version:(unsigned long long)a4;

- (void)encodeWithBSXPCCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithProvider:(id)a0 type:(long long)a1 role:(id)a2 posterUUID:(id)a3 version:(unsigned long long)a4 supplement:(unsigned long long)a5 descriptorIdentifier:(id)a6;
- (BOOL)isNewerVersionOfIdentity:(id)a0;
- (BOOL)setupPersistenceForPathContainerURL:(id)a0 error:(out id *)a1;

@end
