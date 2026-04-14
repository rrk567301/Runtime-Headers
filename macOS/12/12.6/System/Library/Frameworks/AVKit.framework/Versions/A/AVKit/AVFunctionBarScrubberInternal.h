@class NSView, NSString, NSArray, NSTextField, NSColor, NSDateComponentsFormatter, NSLayoutConstraint, AVPlayerLayer, AVFunctionBarTrackView, AVFunctionBarScrubberKnobView;
@protocol AVFunctionBarScrubberDelegateInternal, NSObject, NSCopying;

@interface AVFunctionBarScrubberInternal : NSView <NSAccessibilitySlider> {
    NSDateComponentsFormatter *_dateComponentsFormatter;
    AVFunctionBarScrubberKnobView *_knobView;
    AVFunctionBarTrackView *_trackView;
    double _minValue;
    double _maxValue;
    double _currentValue;
    id _expandableInnerKnobFrameObserver;
    NSArray *_thumbnails;
    NSColor *_audioWaveformColor;
    NSView *_elapsedTimeContainerView;
    NSTextField *_elapsedTimeTextField;
    NSTextField *_elapsedTimeShadowTextField;
    BOOL _showsElapsedTimeRightOfTheKnob;
    id<NSObject, NSCopying> _identityOfTrackedTouch;
    BOOL _didStartScrubbingForTrackedTouch;
    struct CGPoint { double x; double y; } _touchStartLocation;
    double _touchOffset;
    BOOL _needsLayoutSubviews;
    NSLayoutConstraint *_knobViewPositionLayoutConstraint;
    NSLayoutConstraint *_elapsedTimeLayoutConstraint;
}

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double currentValue;
@property (nonatomic) BOOL shouldSkipForwardOrBackwardWhenTapped;
@property (nonatomic) BOOL showsElapsedTime;
@property (nonatomic) BOOL keepsExpandedKnobWithinBounds;
@property (retain, nonatomic) NSColor *audioWaveformColor;
@property (retain, nonatomic) AVFunctionBarTrackView *trackView;
@property (retain, nonatomic) NSArray *thumbnails;
@property (weak, nonatomic) id<AVFunctionBarScrubberDelegateInternal> delegate;
@property (retain, nonatomic) AVPlayerLayer *scrubPlayerLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityMinValue;
- (id)accessibilityMaxValue;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)_stopTracking;
- (void)_touchesEndedOrCancelledWithEvent:(id)a0;
- (void)_updateKnob;
- (double)_normalizedCurrentValue;
- (void)_updateElapsedTimeLayoutConstraint;
- (BOOL)_knobShouldShowThumbnail;
- (void)_updateCurrentValueForTouch:(id)a0;
- (double)_normalizedValueForTouch:(id)a0;

@end
