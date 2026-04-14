@class NSString, NSMutableDictionary, NSDate, NSMutableArray;

@interface MPClusterSlide : NSObject <NSCopying>

@property (copy) NSDate *captureDate;
@property (copy) NSString *path;
@property long long referenceCounter;
@property long long index;
@property (retain) NSMutableDictionary *usageCounterPerLayer;
@property (retain) NSMutableArray *usableSlideClusters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)usageCountDescription;
- (void)resetAllUsageCounters;
- (long long)overallUsageCounter;
- (void)setUsageCounterForLayer:(id)a0 to:(long long)a1;
- (void)increaseUsageCounterForLayer:(id)a0;
- (long long)usageCounterForLayer:(id)a0;

@end
