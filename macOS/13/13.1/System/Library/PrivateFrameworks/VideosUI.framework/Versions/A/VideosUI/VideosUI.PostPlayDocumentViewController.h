@interface VideosUI.PostPlayDocumentViewController : VideosUI.DocumentRequestViewController <VUIPlaybackUpNextController> {
    void /* unknown type, empty encoding */ playbackUpNextDelegate;
    void /* unknown type, empty encoding */ postPlayContextData;
}

- (void)setPlaybackUpNextDelegate:(id)a0;
- (void)setPlaybackUpNextContextData:(id)a0;
- (void)startAutoPlayAnimation;
- (double)playbackUpNextViewHeight;
- (void)recordUpNextImpressions;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
