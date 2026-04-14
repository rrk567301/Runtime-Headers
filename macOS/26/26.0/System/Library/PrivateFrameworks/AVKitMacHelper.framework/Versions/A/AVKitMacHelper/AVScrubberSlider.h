@class NSArray, NSDateComponentsFormatter;
@protocol AVMediaTimelineControlSource, AVScrubberSliderDelegate;

@interface AVScrubberSlider : NSSlider {
    NSArray *_loadedTimeRanges;
    NSDateComponentsFormatter *_dateComponentsFormatter;
    NSArray *_photosensitiveRegions;
}

@property (readonly, nonatomic) double normalizedSliderValue;
@property (weak, nonatomic) id<AVScrubberSliderDelegate> delegate;
@property (retain, nonatomic) NSArray *loadedTimeRanges;
@property (retain, nonatomic) NSArray *photosensitiveRegions;
@property (retain, nonatomic) NSArray *highlightedTimeRanges;
@property (copy, nonatomic) NSArray *timeRangeMarks;
@property (weak, nonatomic) id<AVMediaTimelineControlSource> mediaTimelineControlSource;
@property (nonatomic) BOOL showsScrubberKnob;
@property (nonatomic) BOOL showsBar;

+ (void)initialize;

- (void)mouseDown:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityValueDescription;
- (void)_didEndScrubbing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeRangeFrameForTimeRangeMark:(id)a0;
- (void)_willBeginScrubbing;
- (struct CGPoint { double x0; double x1; })positionForTimeRangeMark:(id)a0;

@end
