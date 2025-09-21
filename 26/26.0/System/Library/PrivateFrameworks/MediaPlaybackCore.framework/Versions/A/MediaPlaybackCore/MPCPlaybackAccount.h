@class NSError, NSString, NSURL, _MPCProtoDelegateInfoTokenB, _MPCProtoDelegateInfoTokenE, ICMusicSubscriptionStatus, ICURLBag, ICUserIdentity;

@interface MPCPlaybackAccount : NSObject <NSCopying>

@property (copy, nonatomic) NSString *hashedDSID;
@property (nonatomic) BOOL hasCloudLibraryEnabled;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (nonatomic, getter=isActiveAccount) BOOL activeAccount;
@property (nonatomic, getter=isFallbackAccount) BOOL fallbackAccount;
@property (nonatomic, getter=isPrivateListeningEnabled) BOOL privateListeningEnabled;
@property (retain, nonatomic) ICURLBag *bag;
@property (retain, nonatomic) id _whaStreamerStorage;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (readonly, copy, nonatomic) NSString *shortHashedDSID;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL canAutoPlay;
@property (readonly, nonatomic) BOOL hasCatalogPlaybackCapability;
@property (readonly, nonatomic) BOOL usesLease;
@property (readonly, nonatomic) BOOL hasMigrationCapability;
@property (readonly, nonatomic) BOOL hasDelegationCapability;
@property (readonly, nonatomic, getter=isDelegated) BOOL delegated;
@property (readonly, copy, nonatomic) NSURL *miniSinfEndpointURL;
@property (readonly, nonatomic) unsigned long long miniSinfMaximumBatchSize;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_copyStreamerStorage:(id)a0;
- (BOOL)canEnableCloudLibrary;
- (id)delegateTokenAWithError:(id *)a0;
- (void)getDelegateTokenEWithTokenB:(_MPCProtoDelegateInfoTokenB *)a0 completion:(void (^)(_MPCProtoDelegateInfoTokenE *, NSError *))a1;
- (id)initWithDelegatedUserIdentity:(id)a0;
- (id)initWithUserIdentity:(id)a0 subscriptionStatus:(id)a1;

@end
