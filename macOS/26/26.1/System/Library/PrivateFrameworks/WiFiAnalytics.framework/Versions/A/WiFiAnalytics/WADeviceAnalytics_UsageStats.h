@interface WADeviceAnalytics_UsageStats : NSObject

@property (nonatomic) short latestCompleteWeekUsageCumulativePercentage;
@property (nonatomic) long long latestCompleteWeekUsageCumulativeSeconds;
@property (nonatomic) short latestCompleteWeekUsagePercentage;
@property (nonatomic) long long latestCompleteWeekUsageSeconds;

- (id)description;
- (id)initWithUniqueMO:(id)a0;

@end
