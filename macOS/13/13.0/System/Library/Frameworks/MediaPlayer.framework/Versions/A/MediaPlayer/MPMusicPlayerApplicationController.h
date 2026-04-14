@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController

@property (class, nonatomic) BOOL shouldUseSystemMusicAppOnMacOS;

@property (readonly, nonatomic) NSXPCConnection *serviceConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_clearConnection;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)_establishConnectionIfNeeded;
- (void)setDisableAutomaticCanBeNowPlaying:(BOOL)a0;
- (void)setRelativeVolume:(float)a0;
- (void)performQueueTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)_mediaItemsForContentItemIDs:(id)a0;
- (void)onApplicationServerAsync:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)onApplicationServer:(id /* block */)a0;

@end
