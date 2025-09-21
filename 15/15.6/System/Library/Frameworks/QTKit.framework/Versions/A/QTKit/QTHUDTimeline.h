@class NSString;
@protocol QTHUDTimelineDelegate;

@interface QTHUDTimeline : QTHUDSlider <QTHUDTimelineCellDelegate> {
    id<QTHUDTimelineDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)exposedBindings;
- (char)isBordered;
- (void)setBordered:(char)a0;
- (void)setCell:(id)a0;
- (void)setTimeRange:(struct { struct { long long x0; long long x1; long long x2; } x0; struct { long long x0; long long x1; long long x2; } x1; })a0;
- (struct { struct { long long x0; long long x1; long long x2; } x0; struct { long long x0; long long x1; long long x2; } x1; })timeRange;
- (struct { long long x0; long long x1; long long x2; })QTTimeValue;
- (void)setQTTimeValue:(struct { long long x0; long long x1; long long x2; })a0;
- (id)highlightedTimeRanges;
- (void)setHighlightedTimeRanges:(id)a0;
- (void)takeQTTimeValueFrom:(id)a0;
- (struct { long long x0; long long x1; long long x2; })timelineCell:(id)a0 willChangeTimeValue:(struct { long long x0; long long x1; long long x2; })a1;

@end
