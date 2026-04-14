@class NSMenu, AVObservationController, AVPlaybackSpeedCollection;

@interface AVDesktopPlaybackRateMenuController : NSObject {
    AVObservationController *_observationController;
    NSMenu *_playbackSpeedMenu;
}

@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (readonly, nonatomic) NSMenu *menu;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_playbackSpeedMenuItemSelected:(id)a0;
- (void)_reconstructplaybackSpeedMenu;

@end
