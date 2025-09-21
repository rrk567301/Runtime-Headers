@class NSTextField, AVMediaTimelineControlConfiguration, NSArray, NSString, CADisplayLink, AVScrollSliderView, AVScrubberSlider, AVObservationController;
@protocol AVMediaTimelineControlDelegate, AVMediaTimelineControlSource;

@interface AVMediaTimelineControl : NSView <AVScrubberSliderDelegate, AVScrollSliderViewDelegate> {
    CADisplayLink *_displayLink;
    AVObservationController *_observationController;
    BOOL _observationControllerObserving;
    float _lastPreferredFramesPerSecond;
    float _timelineValuesUpdateInterval;
    BOOL _timelineViewsHaveBeenSetUp;
    float _lastUpdatedTime;
}

@property (retain, nonatomic) NSTextField *leadingLabel;
@property (retain, nonatomic) AVScrubberSlider *scrubber;
@property (retain, nonatomic) NSTextField *trailingLabel;
@property (nonatomic) BOOL isSliderTracking;
@property (retain, nonatomic) NSArray *timeRangeMarks;
@property (retain, nonatomic) AVScrollSliderView *scrollSliderContainerView;
@property (weak, nonatomic) id<AVMediaTimelineControlSource> source;
@property (weak, nonatomic) id<AVMediaTimelineControlDelegate> delegate;
@property (copy, nonatomic) AVMediaTimelineControlConfiguration *configuration;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)layout;
- (id)initWithSource:(id)a0;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)_handleDisplayLink;
- (void)_handleSlider:(id)a0;
- (void)_invalidateDisplayLink;
- (void)_updateDisplayLinkPausedStateIfNeeded;
- (void)_updateLabelsValues;
- (void)_updateTimeRangeMarks;
- (void)_updateTimelineValues;
- (void)scrollSliderView:(id)a0 didUpdateToValue:(double)a1;
- (void)scrollSliderViewDidBeginScrolling:(id)a0;
- (void)scrollSliderViewDidEndScrolling:(id)a0;
- (void)scrubberSliderDidEndScrubbing:(id)a0;
- (void)scrubberSliderWillBeginScrubbing:(id)a0;
- (double)xPositionForTimeRangeMarkWithIdentifier:(id)a0;

@end
