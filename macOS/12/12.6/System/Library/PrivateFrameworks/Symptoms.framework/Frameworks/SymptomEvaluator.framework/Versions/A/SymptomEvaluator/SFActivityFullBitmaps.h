@class NSMutableDictionary;

@interface SFActivityFullBitmaps : SFActivityBitmaps

@property (retain) NSMutableDictionary *flows;

- (id)init;
- (void).cxx_destruct;
- (void)freeUpBufferSpace;
- (void)addActivityWithFlowId:(unsigned long long)a0 startTime:(unsigned long long)a1 part1:(unsigned long long)a2 part2:(unsigned long long)a3;
- (void)resetAllActivities;
- (id)getAllFlowIds;
- (id)getWrappedBitmapsForFlowId:(unsigned long long)a0;
- (id)getWrappedBitmapsForFlowId:(unsigned long long)a0 fromTime:(unsigned long long)a1 toTime:(unsigned long long)a2;
- (unsigned long long)getHammingWeightForFlowId:(unsigned long long)a0;
- (unsigned long long)getLongestContiguousHammingWeightForFlowId:(unsigned long long)a0;

@end
