@class SHRange;

@interface SHQueryMediaTimelineAdjustmentValue : NSObject

@property (readonly) SHRange *timeRange;
@property (readonly) double timelineShiftDuration;

- (void).cxx_destruct;
- (id)initWithTimeRange:(id)a0 timelineShiftDuration:(double)a1;

@end
