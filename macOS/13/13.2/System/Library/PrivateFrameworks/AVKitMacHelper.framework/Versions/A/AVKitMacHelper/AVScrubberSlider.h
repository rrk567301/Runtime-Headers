@class NSArray, NSDateComponentsFormatter;
@protocol AVScrubberSliderDelegate;

@interface AVScrubberSlider : NSSlider {
    NSArray *_loadedTimeRanges;
    NSDateComponentsFormatter *_dateComponentsFormatter;
}

@property (readonly, nonatomic) double normalizedSliderValue;
@property (weak, nonatomic) id<AVScrubberSliderDelegate> delegate;
@property (retain, nonatomic) NSArray *loadedTimeRanges;
@property (nonatomic) BOOL showsScrubberKnob;
@property (nonatomic) BOOL showsBar;

+ (void)initialize;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)accessibilityValueDescription;
- (void)_willBeginScrubbing;
- (void)_didEndScrubbing;

@end
