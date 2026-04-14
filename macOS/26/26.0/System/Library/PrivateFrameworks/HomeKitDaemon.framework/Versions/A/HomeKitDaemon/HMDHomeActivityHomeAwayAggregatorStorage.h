@interface HMDHomeActivityHomeAwayAggregatorStorage : HMDHomeActivityStateAggregatorStorage

+ (id)logCategory;
+ (unsigned long long)activityType;

- (id)fetchLegacyPresenceMapOnManagedObjectContext;
- (id)fetchUserActivityReportsOnManagedObjectContext;
- (void)updateMKFUserActivityStatus:(id)a0 withReport:(id)a1;
- (id)userActivityReportWithActivityStatus:(id)a0 user:(id)a1;

@end
