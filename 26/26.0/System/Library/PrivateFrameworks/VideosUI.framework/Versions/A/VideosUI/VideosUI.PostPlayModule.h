@interface VideosUI.PostPlayModule : NSObject <VUIPlaybackUpNextControllerDelegate> {
    void /* unknown type, empty encoding */ postPlayViewController;
    void /* unknown type, empty encoding */ documentViewController;
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ loadContinuation;
    void /* unknown type, empty encoding */ mediaItem;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ onBackgroundPlaybackBegin;
    void /* unknown type, empty encoding */ onMediaInfoChanged;
    void /* unknown type, empty encoding */ initialPlaybackStartDate;
    void /* unknown type, empty encoding */ autoPlayedVideoCount;
}

- (id)init;
- (void).cxx_destruct;
- (void)backgroundPlaybackWillBegin;
- (void)mediaInfoDidChangeTo:(id)a0 canPlay:(BOOL)a1 wasAutoPlayed:(BOOL)a2;
- (void)playbackUpNextControllerReadyToBeDisplayed;

@end
