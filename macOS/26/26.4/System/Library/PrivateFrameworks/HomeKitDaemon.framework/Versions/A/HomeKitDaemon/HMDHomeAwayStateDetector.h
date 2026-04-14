@interface HMDHomeAwayStateDetector : HMDUserActivityStateDetector

@property (nonatomic) unsigned long long state;

+ (id)logCategory;
+ (unsigned long long)contributorType;
+ (BOOL)supportsDataSource:(id)a0;

- (id)initWithDataSource:(id)a0;
- (void)_registerForNotifications;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)determineStateWithReason:(unsigned long long)a0;
- (void)handleHomeGeofencesRegisteredNotification:(id)a0;
- (void)handleHomeLocationChanged:(id)a0;
- (void)handleLocationAuthorizationChange:(long long)a0;
- (void)updateLatestReportWithReason:(unsigned long long)a0;
- (void)updateState:(unsigned long long)a0 withReason:(unsigned long long)a1;

@end
