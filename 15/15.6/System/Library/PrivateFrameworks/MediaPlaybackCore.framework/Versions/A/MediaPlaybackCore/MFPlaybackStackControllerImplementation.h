@class NSArray, NSDictionary, NSString, NSNumber;
@protocol MFQueuePlayerItem;

@interface MFPlaybackStackControllerImplementation : NSObject <MFPlaybackStackController, MFQueueManagement> {
    void /* unknown type, empty encoding */ signpostSubscription;
    void /* unknown type, empty encoding */ internalStack;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) long long currentState;
@property (nonatomic, readonly) long long interruptedState;
@property (nonatomic, readonly) long long currentItemTransition;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) float effectiveRate;
@property (nonatomic, readonly) float targetRate;
@property (nonatomic, readonly) NSNumber *targetTime;
@property (nonatomic, readonly) id<MFQueuePlayerItem> currentItem;
@property (nonatomic, readonly) NSArray *nextItems;
@property (nonatomic, readonly) id<MFQueuePlayerItem> currentQueueItem;
@property (nonatomic, readonly) long long timeControlStatus;
@property (nonatomic, readonly) NSDictionary *stateDictionary;
@property (nonatomic, readonly) long long renderingMode;
@property (nonatomic, readonly) NSString *modeDescription;
@property (nonatomic, readonly) char isModeSolo;
@property (nonatomic, readonly) char isModeShared;
@property (nonatomic, readonly) char isModeManagedSession;
@property (nonatomic) float relativeVolume;
@property (nonatomic) char airPlayLocalPlaybackEnabled;
@property (nonatomic) float airPlayLocalPlaybackVolume;

- (id)init;
- (void).cxx_destruct;
- (void)setAudioOutputDeviceUniqueID:(id)a0;
- (void)resetWithReason:(id)a0;
- (void)pauseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)activateAudioSessionWithCompletion:(id /* block */)a0;
- (void)activeFormatDidChangeFor:(id)a0;
- (void)beginScanningWithDirection:(long long)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)beginSeekingWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)clearPlaybackQueue;
- (void)deactivateAudioSessionIfIdle:(long long)a0;
- (void)endScanningWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)endSeekingWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithPlayerID:(id)a0 engineID:(id)a1 queueController:(id)a2 assetLoader:(id)a3 errorController:(id)a4 externalPlaybackController:(id)a5 leaseController:(id)a6 defaults:(id)a7 behavior:(long long)a8 queue:(id)a9;
- (void)jumpTo:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)pauseForLeasePreventionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)pauseForSleepTimerWithFadeOut:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)pauseWithFadeOut:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)playWithRate:(float)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)reloadCurrentItemWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)reloadItemsKeepingCurrentItem:(char)a0 allowReuse:(char)a1;
- (void)restoreQueue:(id /* block */)a0;
- (void)seekTo:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)setApplicationMusicPlayerTransitionType:(long long)a0 duration:(double)a1;
- (void)setInhibitSpeechDetection:(char)a0;
- (void)setQueueWithInitialItem:(id)a0 andPlay:(char)a1 identifier:(id)a2 completion:(id /* block */)a3;
- (void)setRate:(float)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)setSpatializationFormat:(long long)a0;
- (void)setupForManagedSessionWithAudioSession:(id)a0;
- (void)setupForNewQueueWithSessionID:(id)a0;
- (void)setupForShared;
- (void)setupForSolo;
- (char)shouldSkipJumpToItemStart:(long long)a0;
- (void)teardownForQueueWithSessionID:(id)a0;
- (void)updateAudioSessionWithConfiguration:(id)a0;
- (void)setAudioOutputContext:(id)a0;

@end
