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
- (BOOL)userQueueModificationsDisabled;
- (void)setUserQueueModificationsDisabled:(BOOL)a0;
- (void)_establishConnectionIfNeeded;
- (id)_queueDescriptor;
- (id)_nowPlaying;
- (BOOL)_shouldAccessCache;
- (void)onSystemServer:(id /* block */)a0;

@end
