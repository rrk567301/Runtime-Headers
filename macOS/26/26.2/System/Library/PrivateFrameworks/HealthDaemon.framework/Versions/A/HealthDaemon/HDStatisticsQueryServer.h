@class HKQuantityType, NSDateInterval;

@interface HDStatisticsQueryServer : HDQueryServer {
    NSDateInterval *_dateInterval;
    HKQuantityType *_quantityType;
}

@property (readonly, nonatomic) unsigned long long statisticsOptions;
@property (readonly, nonatomic) unsigned long long mergeStrategy;

+ (BOOL)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (id)quantityType;
- (void).cxx_destruct;

@end
