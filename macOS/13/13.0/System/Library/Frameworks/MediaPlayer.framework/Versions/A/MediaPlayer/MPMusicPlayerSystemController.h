@class NSString;

@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)playbackState;
- (id)_queueDescriptor;
- (BOOL)userQueueModificationsDisabled;
- (void)setUserQueueModificationsDisabled:(BOOL)a0;
- (void)_establishConnectionIfNeeded;
- (id)_nowPlaying;
- (BOOL)_shouldAccessCache;
- (void)onSystemServer:(id /* block */)a0;

@end
