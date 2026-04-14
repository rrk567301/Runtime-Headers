@class NSString, RBSProcessIdentity;

@interface FBSSceneClientIdentity : NSObject <FBSSceneClientIdentifying, NSCopying, NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL targetsClientEndpoint;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityForBundleID:(id)a0;
+ (id)localIdentity;
+ (id)defaultIdentityForProcessIdentity:(id)a0;
+ (id)identityForManagedEndpointOfProcessIdentity:(id)a0;
+ (id)identityForProcessIdentity:(id)a0;
+ (id)identityForInjectedEndpointToProcessIdentity:(id)a0;

- (BOOL)isValid;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithLocal:(BOOL)a0 direct:(BOOL)a1 identity:(id)a2 description:(id)a3;
- (id)fbs_sceneClientIdentity;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
