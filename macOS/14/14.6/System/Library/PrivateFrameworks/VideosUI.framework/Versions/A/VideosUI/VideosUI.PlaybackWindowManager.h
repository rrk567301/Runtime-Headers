@interface VideosUI.PlaybackWindowManager : NSObject <NSWindowDelegate, VUIPlaybackWindowManager> {
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ defaultAspectRatio;
    void /* unknown type, empty encoding */ minWidth;
}

- (void)windowWillClose:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)presentWindowWithViewController:(id)a0;

@end
