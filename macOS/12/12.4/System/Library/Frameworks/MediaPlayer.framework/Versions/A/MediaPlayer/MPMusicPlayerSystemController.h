@class NSString;

@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShuffleMode:(long long)a0;
- (long long)repeatMode;
- (void)setRepeatMode:(long long)a0;
- (long long)playbackState;
- (id)_queueDescriptor;
- (id)_nowPlaying;
- (void)_establishConnectionIfNeeded;
- (BOOL)userQueueModificationsDisabled;
- (void)setUserQueueModificationsDisabled:(BOOL)a0;
- (BOOL)_shouldAccessCache;
- (void)onSystemServer:(id /* block */)a0;

@end
