@class NSMenu, AVObservationController, AVPlaybackSpeedCollection;

@interface AVDesktopPlaybackRateMenuController : NSObject {
    AVObservationController *_observationController;
    NSMenu *_playbackSpeedMenu;
}

@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (readonly, nonatomic) NSMenu *menu;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_playbackSpeedMenuItemSelected:(id)a0;
- (void)_reconstructplaybackSpeedMenu;

@end
