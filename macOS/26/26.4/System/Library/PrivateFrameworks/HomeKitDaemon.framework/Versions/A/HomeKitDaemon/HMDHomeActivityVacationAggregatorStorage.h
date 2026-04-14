@interface HMDHomeActivityVacationAggregatorStorage : HMDHomeActivityStateAggregatorStorage

+ (unsigned long long)activityType;
+ (id)logCategory;

- (void)updateMKFUserActivityStatus:(id)a0 withReport:(id)a1;
- (id)userActivityReportWithActivityStatus:(id)a0 user:(id)a1;

@end
