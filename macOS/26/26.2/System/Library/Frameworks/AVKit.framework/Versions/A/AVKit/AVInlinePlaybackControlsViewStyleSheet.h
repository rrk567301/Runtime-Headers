@class AVVolumeControlSliderStyleSheet, AVContainerStyleSheet, AVPlaybackControlsContainerStyleSheet;

@interface AVInlinePlaybackControlsViewStyleSheet : AVContainerStyleSheet

@property (readonly, nonatomic) AVPlaybackControlsContainerStyleSheet *controlsStyleSheet;
@property (readonly, nonatomic) AVContainerStyleSheet *timelineControlsStyleSheet;
@property (readonly, nonatomic) AVContainerStyleSheet *auxiliaryControlsStyleSheet;
@property (readonly, nonatomic) AVContainerStyleSheet *displayModeControlsStyleSheet;
@property (readonly, nonatomic) AVVolumeControlSliderStyleSheet *volumeControlsStyleSheet;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentMargin;

- (void).cxx_destruct;
- (id)init;

@end
