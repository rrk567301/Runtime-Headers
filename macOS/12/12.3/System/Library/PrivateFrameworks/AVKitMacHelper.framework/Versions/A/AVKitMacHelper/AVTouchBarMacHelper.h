@class AVTouchBarPlaybackControlsProvider, NSString, NSTouchBar, AVPlayerController, AVPlaybackRateCollection;

@interface AVTouchBarMacHelper : NSObject <AVTouchBarMacHelper>

@property (readonly, nonatomic) AVTouchBarPlaybackControlsProvider *touchBarProvider;
@property (readonly, nonatomic) AVTouchBarPlaybackControlsProvider *touchBarProviderIfLoaded;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection;
@property (retain) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)makeTouchBar;

@end
