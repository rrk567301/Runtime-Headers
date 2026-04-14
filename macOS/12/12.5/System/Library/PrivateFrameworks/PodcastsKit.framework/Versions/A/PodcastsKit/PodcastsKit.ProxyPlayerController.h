@interface PodcastsKit.ProxyPlayerController : NSObject <PKPlayerController>

- (id)init;
- (void)playWithCompletion:(id /* block */)a0;
- (void)pauseWithCompletion:(id /* block */)a0;
- (void)startPlayback:(id)a0 completion:(id /* block */)a1;
- (void)setManifest:(id)a0 startPlayback:(BOOL)a1 completion:(id /* block */)a2;

@end
