@class MPCPlaybackRequestEnvironment, NSString, NSData, MPModelRadioStation, MPCModelRadioContentReference, NSURL;
@protocol MPCContinueListeningRadioQueueProviding;

@interface MPCModelRadioPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming>

@property (copy, nonatomic) NSData *delegateTokenB;
@property (nonatomic) BOOL continueListeningStation;
@property (weak, nonatomic) id<MPCContinueListeningRadioQueueProviding> continueListeningQueueProvider;
@property (nonatomic) long long continueListeningMaxQueueReferences;
@property (nonatomic) long long continueListeningPrefetchThreshold;
@property (copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference;
@property (copy, nonatomic) MPCModelRadioContentReference *seedContentReference;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (copy, nonatomic) NSURL *stationURL;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)userIdentity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setUserIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)queueEndAction;
- (id)descriptionComponents;
- (Class)queueFeederClass;
- (long long)repeatType;
- (long long)shuffleType;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)a0;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;

@end
