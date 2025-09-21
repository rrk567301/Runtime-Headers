@class ICMusicUserProfile, NSString, ICMusicUserStateCookies, ICMusicLibraryAuthTokenStatus, ICMusicSubscriptionStatus, ICDelegateToken, ICLightweightMusicSubscriptionStatus;

@interface ICMusicUserState : NSObject <ICMutableMusicUserState, NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) long long groupSessionCapableStatus;
@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *carrierBundleDeviceID;
@property (copy, nonatomic) ICMusicLibraryAuthTokenStatus *libraryAuthTokenStatus;
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (copy, nonatomic) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus;
@property (nonatomic) long long cloudLibrarySyncStatus;
@property (nonatomic) char usesListeningHistory;
@property (copy, nonatomic) ICMusicUserStateCookies *cookies;
@property (nonatomic, getter=isFrozen) char frozen;
@property (readonly, nonatomic) char isDelegated;
@property (readonly, copy, nonatomic) ICDelegateToken *delegateToken;
@property (readonly, copy, nonatomic) ICMusicUserProfile *userProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void)setUserProfile:(id)a0;
- (id)copyWithBlock:(id /* block */)a0;

@end
