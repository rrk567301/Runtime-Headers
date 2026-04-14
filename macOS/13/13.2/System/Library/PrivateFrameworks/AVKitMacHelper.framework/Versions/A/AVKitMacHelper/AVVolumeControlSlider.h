@class NSLayoutAnchor, NSSlider, NSButton, AVScrollSliderView;

@interface AVVolumeControlSlider : AVVolumeControlView <AVKeyViewLoopParticipant> {
    BOOL _viewHasBeenSetup;
    NSLayoutAnchor *_baselineAnchor;
}

@property (readonly, nonatomic) AVScrollSliderView *volumeControlsContainerView;
@property (readonly, nonatomic) NSButton *volumeButton;
@property (readonly, nonatomic) NSSlider *volumeSlider;

+ (id)_mutedImage;
+ (id)_minVolumeImage;
+ (id)_lowVolumeImage;
+ (id)_mediumVolumeImage;
+ (id)_highVolumeImage;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeKeyView;
- (void)viewWillMoveToWindow:(id)a0;
- (id)firstKeyView;
- (void)setVolume:(double)a0;
- (void)setMuted:(BOOL)a0;
- (void)_setupConstraints;
- (void)_volumeButtonPressed:(id)a0;
- (void)_volumeSliderChanged:(id)a0;
- (void)setUpKeyViewLoopWithNextKeyView:(id)a0;
- (void)_setupViewIfNeeded;
- (void)_updateVolumeButtonImageIfNeeded;
- (void)_updateVolumeSliderIfNeeded;
- (void)_maxVolumeButtonPressed:(id)a0;

@end
