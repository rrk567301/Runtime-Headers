@interface HMDHomeActivityHomeAwayAggregatorStorage : HMDHomeActivityStateAggregatorStorage

+ (unsigned long long)activityType;
+ (id)logCategory;

- (id)fetchLegacyPresenceMapOnManagedObjectContext;
- (id)fetchUserActivityReportsOnManagedObjectContext;
- (void)updateMKFUserActivityStatus:(id)a0 withReport:(id)a1;
- (id)userActivityReportWithActivityStatus:(id)a0 user:(id)a1;

@end
