@class AVObservationController, AVWaveform, AVWaveformLayer, AVPlayerController, AVScrubberSlider;

@interface AVDesktopScrubber : NSView {
    AVObservationController *_observationController;
    id _audioWaveformStatusObservationToken;
    char _showsWaveform;
    double _maxTime;
    double _minTime;
    AVWaveformLayer *_waveformLayer;
    AVWaveform *_waveform;
    char _sliderHasBeenSetUp;
}

@property (retain, nonatomic) AVWaveform *waveform;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVScrubberSlider *slider;
@property (nonatomic) char showsWaveform;
@property (nonatomic) double minTime;
@property (nonatomic) double maxTime;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (char)allowsVibrancy;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToSuperview;
- (void)_setupSliderViewIfNeeded;
- (void)_setupWaveformLayerIfNeeded;
- (void)_updateHighlightedTimeRanges;
- (void)_updatePhotosensitiveRegions;
- (void)_updateWaveformIfNeeded;
- (void)_updateWaveformRange;
- (void)_updateWaveformVisibilityState;

@end
