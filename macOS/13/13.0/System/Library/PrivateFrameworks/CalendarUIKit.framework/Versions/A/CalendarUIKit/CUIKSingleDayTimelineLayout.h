@class NSArray, NSCalendar, NSDate, NSMutableArray;
@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;

@interface CUIKSingleDayTimelineLayout : NSObject {
    NSArray *_occurrences;
    unsigned long long _currentOccurrenceIndex;
    id<CUIKSingleDayTimelineViewItem> _currentOccurrence;
    NSMutableArray *_partitions;
    NSMutableArray *_occurrenceBuckets;
    NSMutableArray *_collidingOccurrences;
    NSDate *_startOfDay;
    NSDate *_endOfDay;
    double _startOfDayAbsoluteTime;
    double _endOfDayAbsoluteTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    NSCalendar *_calendar;
    id<CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
    id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
}

- (void).cxx_destruct;
- (id)initWithOccurrences:(id)a0 startOfDay:(id)a1 endOfDay:(id)a2 geometryDelegate:(id)a3 screenUtilsDelegate:(id)a4 calendar:(id)a5;
- (void)applyLayoutToOccurrencesInResize:(BOOL)a0;
- (void)applyLayoutToOccurrences;
- (BOOL)isRightToLeftLayout;
- (void)_calculateVerticalFrameAspectsForOccurrence:(id)a0;
- (void)_popOccurrencesInPartition:(id)a0 endingBeforeTime:(double)a1;
- (void)_generateNewPartitions;
- (void)_mergePartitions;
- (double)_topOfOccurrence:(id)a0;
- (double)_endOfCollisionZoneForY:(double)a0 occurrence:(id)a1;
- (void)_findCollidingOccurrences;
- (void)_putCollidingOccurrencesIntoBucketsInResize:(BOOL)a0;
- (void)_reclaimSpaceFromStackedOccurrences;
- (void)_stampOccurrenceFrames;
- (void)_initializeFirstGridStripe;
- (BOOL)_inputIsInvalid;
- (void)_capVisibleTextForBucket:(id)a0;
- (double)_adjustedStartTimeForOccurrence:(id)a0;
- (double)_adjustedEndTimeForOccurrence:(id)a0;
- (double)_effectiveEndTimeForOccurrence:(id)a0;
- (double)_combinedWidthOfPartitions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForStartSeconds:(long long)a0 endSeconds:(long long)a1;

@end
