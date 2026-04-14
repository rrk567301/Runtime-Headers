@class SHSignature, NSArray, NSMutableIndexSet, NSMutableArray;

@interface SHQueryMediaTimelineAdjuster : NSObject

@property (readonly) SHSignature *querySignature;
@property (readonly) NSMutableIndexSet *matchWindows;
@property (readonly) NSMutableIndexSet *noMatchWindows;
@property (readonly) NSMutableArray *mediaTimelineAdjustmentValues;
@property (readonly) NSArray *queryMatchOffsetRanges;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })NSRangeFromSHRange:(id)a0;
+ (double)timelineShiftDurationForOffset:(double)a0 usingTimelineAdjustmentValues:(id)a1;

- (void).cxx_destruct;
- (id)adjustedRangeFromTimeRange:(id)a0;
- (id)adjustedTimeRangesFromTimeRanges:(id)a0;
- (double)adjustedUpperBoundFromTimeRange:(id)a0;
- (void)buildMediaTimelineAdjustmentValues;
- (id)initWithQuerySignature:(id)a0 queryMatchOffsetRanges:(id)a1;

@end
