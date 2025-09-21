@class ICURLBag, NSString, NSError, _MPCProtoDelegateInfoTokenE, ICMusicSubscriptionStatus, _MPCProtoDelegateInfoTokenB, ICUserIdentity;

@interface MPCPlaybackAccount : NSObject <NSCopying>

@property (copy, nonatomic) NSString *hashedDSID;
@property (nonatomic) char hasCloudLibraryEnabled;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (nonatomic, getter=isActiveAccount) char activeAccount;
@property (nonatomic, getter=isFallbackAccount) char fallbackAccount;
@property (nonatomic, getter=isPrivateListeningEnabled) char privateListeningEnabled;
@property (retain, nonatomic) ICURLBag *bag;
@property (retain, nonatomic) id _whaStreamerStorage;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (readonly, copy, nonatomic) NSString *shortHashedDSID;
@property (readonly, nonatomic) char canAutoPlay;
@property (readonly, nonatomic) char hasCatalogPlaybackCapability;
@property (readonly, nonatomic) char usesLease;
@property (readonly, nonatomic) char hasMigrationCapability;
@property (readonly, nonatomic) char hasDelegationCapability;
@property (readonly, nonatomic, getter=isDelegated) char delegated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_copyStreamerStorage:(id)a0;
- (id)delegateTokenAWithError:(id *)a0;
- (void)getDelegateTokenEWithTokenB:(_MPCProtoDelegateInfoTokenB *)a0 completion:(void (^)(_MPCProtoDelegateInfoTokenE *, NSError *))a1;
- (id)initWithDelegatedUserIdentity:(id)a0;
- (id)initWithUserIdentity:(id)a0 subscriptionStatus:(id)a1;

@end
