@class NSDate, NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController

@property (class, nonatomic) BOOL shouldUseSystemMusicAppOnMacOS;

@property (readonly, nonatomic) NSXPCConnection *serviceConnection;
@property (nonatomic) BOOL disableAutomaticCanBeNowPlaying;
@property (nonatomic) long long transitionType;
@property (nonatomic) double crossFadeDuration;
@property (retain, nonatomic) NSDate *lastWokeDate;
@property (nonatomic) BOOL disableShuffle;
@property (nonatomic) BOOL disableRepeat;
@property (nonatomic) BOOL disableAutoPlay;

- (void)_clearConnection;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setRelativeVolume:(float)a0;
- (id)initWithClientIdentifier:(id)a0 queue:(id)a1;
- (void)_establishConnectionIfNeeded;
- (id)_mediaItemsForContentItemIDs:(id)a0;
- (id)_nowPlaying;
- (void)_setApplicationMusicPlayerTransitionType:(long long)a0;
- (void)_setApplicationMusicPlayerTransitionType:(long long)a0 withDuration:(double)a1;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)onApplicationServer:(id /* block */)a0;
- (void)onApplicationServerAsync:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performQueueTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
