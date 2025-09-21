@class NSLayoutAnchor, AVVolumeControlSliderStyleSheet, NSArray, NSSlider, NSButton, AVScrollSliderView;

@interface AVVolumeControlSlider : AVVolumeControlView <AVKeyViewLoopParticipant> {
    BOOL _viewHasBeenSetup;
    AVVolumeControlSliderStyleSheet *_styleSheet;
    NSLayoutAnchor *_baselineAnchor;
    NSArray *_volumeButtonConstraints;
    NSArray *_volumeSliderConstraints;
    NSArray *_volumeControlsContainerViewConstraints;
}

@property (readonly, nonatomic) AVScrollSliderView *volumeControlsContainerView;
@property (readonly, nonatomic) NSButton *volumeButton;
@property (readonly, nonatomic) NSSlider *volumeSlider;
@property (nonatomic) BOOL prefersLeadingSlider;

+ (id)_minVolumeImage;
+ (id)_lowVolumeImage;
+ (id)_highVolumeImage;
+ (id)_mediumVolumeImage;
+ (id)_mutedImage;

- (void)viewWillMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setVolume:(double)a0;
- (id)initWithStyleSheet:(id)a0;
- (void)setMuted:(BOOL)a0;
- (void)setStyleSheet:(id)a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (id)firstKeyView;
- (void)_maxVolumeButtonPressed:(id)a0;
- (void)_setupViewIfNeeded;
- (void)_updateVolumeButtonImageIfNeeded;
- (void)_updateVolumeSliderIfNeeded;
- (void)_volumeButtonPressed:(id)a0;
- (void)_volumeSliderChanged:(id)a0;
- (void)setUpKeyViewLoopWithNextKeyView:(id)a0;

@end
