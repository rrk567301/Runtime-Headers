@class NSDictionary, NSOrderedSet;

@interface CWConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSDictionary *info;
@property (copy, nonatomic) NSOrderedSet *networkProfiles;
@property (nonatomic) char requireAdministratorForAssociation;
@property (nonatomic) char requireAdministratorForPower;
@property (nonatomic) char requireAdministratorForIBSSMode;
@property (nonatomic) char rememberJoinedNetworks;

+ (id)configuration;
+ (id)configurationWithConfiguration:(id)a0;
+ (id)configurationForInterfaceWithName:(id)a0;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInfo:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (char)commitForInterfaceWithName:(id)a0 authorization:(id)a1 error:(out id *)a2;
- (id)initForInterfaceWithName:(id)a0;
- (char)isEqualToConfiguration:(id)a0;
- (id)networkProfileWithSSID:(id)a0 securityType:(unsigned long long)a1;
- (id)preferredNetworks;

@end
