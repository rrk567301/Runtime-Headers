@class NSMenu, AVPlaybackRateCollection, AVObservationController;

@interface AVDesktopPlaybackRateMenuController : NSObject {
    AVObservationController *_observationController;
    NSMenu *_playbackRateMenu;
}

@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection;
@property (readonly, nonatomic) NSMenu *menu;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reconstructPlaybackRateMenu;
- (void)_playbackRateMenuItemSelected:(id)a0;

@end
