@class MPMediaItem;

@interface SearchUIMusicStatusCache : TLKAsyncCache

@property (retain) MPMediaItem *nowPlayingItem;
@property long long playbackState;

- (void).cxx_destruct;
- (id)init;
- (void)updateNowPlayingItem;
- (void)updatePlaybackState;

@end
