@interface MPCPodcastsPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>

- (id)init;
- (void)getRemotePlaybackQueueFromIntent:(id)a0 destination:(long long)a1 completion:(id /* block */)a2;

@end
