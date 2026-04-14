@class ICUserIdentity, NSString, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource;

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) MPCPlaybackRequestEnvironment *activeAccountRequestEnvironment;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientVersion;
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties;
@property (readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;

+ (id)requestEnvironmentWithUserIdentity:(id)a0;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserIdentity:(id)a0;
- (id)_createStoreRequestContext;
- (id)_createMusicKitRequestContext;
- (id)rectifiedPlaybackRequestEnvironmentWithReasons:(id *)a0;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)a0;

@end
