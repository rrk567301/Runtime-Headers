@interface MPCAssistantCommand : NSObject

- (void)insertPlaybackQueueWithResult:(id)a0 atPosition:(int)a1 onDestination:(id)a2 withOptions:(id)a3 completion:(id /* block */)a4;
- (void)sendCommand:(unsigned int)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendCommandWithResult:(unsigned int)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendPlaybackArchive:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackArchive:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendPlaybackArchiveWithResult:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackArchiveWithResult:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendPlaybackQueue:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackQueue:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)sendPlaybackQueueWithResult:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaybackQueueWithResult:(id)a0 toDestination:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;

@end
