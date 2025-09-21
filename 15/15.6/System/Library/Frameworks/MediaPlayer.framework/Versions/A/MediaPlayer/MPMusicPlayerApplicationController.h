@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController

@property (class, nonatomic) char shouldUseSystemMusicAppOnMacOS;

@property (readonly, nonatomic) NSXPCConnection *serviceConnection;
@property (nonatomic) char disableAutomaticCanBeNowPlaying;
@property (nonatomic) long long transitionType;
@property (nonatomic) double crossFadeDuration;
@property (nonatomic) char disableShuffle;
@property (nonatomic) char disableRepeat;
@property (nonatomic) char disableAutoPlay;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_clearConnection;
- (id)initWithClientIdentifier:(id)a0 queue:(id)a1;
- (void)_establishConnectionIfNeeded;
- (id)_mediaItemsForContentItemIDs:(id)a0;
- (void)_setApplicationMusicPlayerTransitionType:(long long)a0;
- (void)_setApplicationMusicPlayerTransitionType:(long long)a0 withDuration:(double)a1;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)onApplicationServer:(id /* block */)a0;
- (void)onApplicationServerAsync:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performQueueTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)setRelativeVolume:(float)a0;

@end
