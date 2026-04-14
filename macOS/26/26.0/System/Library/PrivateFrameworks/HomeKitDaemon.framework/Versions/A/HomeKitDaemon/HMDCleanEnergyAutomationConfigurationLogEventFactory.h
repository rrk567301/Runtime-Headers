@protocol HMDHouseholdMetricsDataSource;

@interface HMDCleanEnergyAutomationConfigurationLogEventFactory : HMFObject <HMDHouseholdMetricsLogEventFactory>

@property (nonatomic, readonly) id<HMDHouseholdMetricsDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;

@end
