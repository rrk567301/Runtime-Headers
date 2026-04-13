@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {
    long long _shuffleMode;
    long long _repeatMode;
}

@property (readonly, nonatomic) NSXPCConnection *serviceConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)shuffleMode;
- (void)setShuffleMode:(long long)a0;
- (long long)repeatMode;
- (void)setRepeatMode:(long long)a0;
- (void)_clearConnection;
- (id)initWithClientIdentifier:(id)a0 queue:(id)a1;
- (void)setQueueWithDescriptor:(id)a0;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)_establishConnectionIfNeeded;
- (void)performQueueTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)_mediaItemsForContentItemIDs:(id)a0;
- (void)onApplicationServerAsync:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)onApplicationServer:(id /* block */)a0;

@end
