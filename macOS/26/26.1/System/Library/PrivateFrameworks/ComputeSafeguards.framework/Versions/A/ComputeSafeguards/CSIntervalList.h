@class NSMutableArray;

@interface CSIntervalList : NSObject

@property (retain) NSMutableArray *intervalArray;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addInterval:(id)a0;
- (double)durationInSeconds;
- (double)sum;
- (id)initWithIntervals:(id)a0;
- (double)timeWeightedSum;
- (id)firstInterval;
- (id)intersectWithIntervalList:(id)a0;
- (id)intervalAtIndex:(unsigned long long)a0;
- (id)lastInterval;

@end
