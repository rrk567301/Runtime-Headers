@class HKQuantity;

@interface HKHearingLevelMetrics : NSObject

@property (readonly, copy, nonatomic) HKQuantity *averageSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *minimumSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *maximumSensitivity;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAverageSensitivity:(id)a0 minimumSensitivity:(id)a1 maximumSensitivity:(id)a2;

@end
