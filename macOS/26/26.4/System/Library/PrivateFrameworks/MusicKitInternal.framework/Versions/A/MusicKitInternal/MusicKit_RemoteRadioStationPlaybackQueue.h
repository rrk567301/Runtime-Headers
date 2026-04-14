@class MPModelRadioStation;

@interface MusicKit_RemoteRadioStationPlaybackQueue : MusicKit_RemotePlaybackQueue {
    MPModelRadioStation *_underlyingStation;
}

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 replaceQueueIntent:(long long)a1;
- (void)setQueueWithPath:(id)a0 sessionID:(id)a1 userActionTime:(id)a2 completionHandler:(id /* block */)a3;

@end
