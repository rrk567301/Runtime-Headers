@class NSString;
@protocol MILocationProtocol;

@interface MIAppIdentity : NSObject <MIAppIdentityPersonaResolver, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) id<MILocationProtocol> location;
@property (retain, nonatomic) NSString *personaUniqueString;
@property (nonatomic) BOOL isResolved;

+ (BOOL)validateAppIdentity:(id)a0 withError:(id *)a1;
+ (id)_locationClassCluster;

- (id)initWithBundleID:(id)a0 personaUniqueString:(id)a1 location:(id)a2;
- (id)description;
- (id)initWithBundleID:(id)a0 persona:(id)a1;
- (BOOL)resolvePersonaWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1 location:(id)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)_doInitWithBundleID:(id)a0 personaUniqueString:(id)a1 location:(id)a2;
- (id)identityByChangingLocation:(id)a0;

@end
