@class NSString, NSMutableDictionary, NSDate, NSMutableArray;

@interface MPClusterSlide : NSObject <NSCopying>

@property (copy) NSDate *captureDate;
@property (copy) NSString *path;
@property long long referenceCounter;
@property long long index;
@property (retain) NSMutableDictionary *usageCounterPerLayer;
@property (retain) NSMutableArray *usableSlideClusters;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetAllUsageCounters;
- (id)usageCountDescription;
- (void)increaseUsageCounterForLayer:(id)a0;
- (long long)usageCounterForLayer:(id)a0;
- (void)setUsageCounterForLayer:(id)a0 to:(long long)a1;
- (long long)overallUsageCounter;

@end
