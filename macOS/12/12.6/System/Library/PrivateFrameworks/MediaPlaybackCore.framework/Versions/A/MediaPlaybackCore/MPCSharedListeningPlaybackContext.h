@class ICLiveLinkIdentity, NSString, MPCPlaybackRequestEnvironment, MPCPlaybackSharedListeningProperties, ICUserIdentity;

@interface MPCSharedListeningPlaybackContext : MPPlaybackContext <MPCPlaybackContextUserIdentityConsuming, MPCModelPlaybackRequestEnvironmentConsuming>

@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (copy, nonatomic) ICLiveLinkIdentity *identity;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queueFeederClass;
+ (BOOL)supportsAutoPlay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)shuffleType;
- (long long)repeatType;
- (id)descriptionComponents;
- (BOOL)isCompatibleWithReplacementContext:(id)a0 incompatibleReason:(id *)a1;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)a0;

@end
