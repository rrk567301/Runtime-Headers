@class MPMediaItem;

@interface SearchUIMusicStatusCache : TLKAsyncCache

@property (retain) MPMediaItem *nowPlayingItem;
@property long long playbackState;

- (id)init;
- (void).cxx_destruct;
- (void)updateNowPlayingItem;
- (void)updatePlaybackState;

@end
