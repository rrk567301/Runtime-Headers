@interface VideosUI.PlaybackEndManager : NSObject <VUIPlaybackEndManager> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ monitors;
    void /* unknown type, empty encoding */ playbackBroadcastDidEndHandler;
}

@property (nonatomic, copy) id /* block */ playbackBroadcastDidEndHandler;

- (id)init;
- (void).cxx_destruct;
- (void)remove:(id)a0;
- (void)monitor:(id)a0;
- (void)removeAllPlayers;

@end
