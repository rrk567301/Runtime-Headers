@class MRDestination;

@interface MRNowPlayingRequest : NSObject

@property (readonly, copy, nonatomic) MRDestination *destination;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDestination:(id)a0;
- (id)initWithOrigin:(id)a0;
- (id)initWithPlayerPath:(id)a0;
- (void)nowPlayingPlayerPathOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)triggerAudioFadeOutForNowPlayingApplicationWithReplyQueue:(id)a0 completion:(id /* block */)a1;
- (void)triggerAudioFadeInWithReplyQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestLastPlayingDateOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestSupportedCommandsOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 appOptions:(unsigned int)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)requestPlaybackStateOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestNowPlayingItemMetadataOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestNowPlayingItemArtworkOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestNowPlayingInfoOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestShuffleAndRepeatModeOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestProxiableSupportedCommandsOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestDeviceLastPlayingDateOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)requestClientPropertiesOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
