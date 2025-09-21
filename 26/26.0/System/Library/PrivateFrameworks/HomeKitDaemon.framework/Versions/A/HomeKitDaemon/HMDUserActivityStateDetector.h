@class NSString, HMDUserActivityReportValue;
@protocol HMDHomeActivityStateManagerDataSource, HMDUserActivityStateDetectorStateChangeDelegate;

@interface HMDUserActivityStateDetector : HMFObject <HMFLogging, HMDDumpState>

@property (class, readonly, nonatomic) unsigned long long contributorType;

@property (readonly, nonatomic) id<HMDHomeActivityStateManagerDataSource> dataSource;
@property (retain, nonatomic) HMDUserActivityReportValue *latestReport;
@property (weak, nonatomic) id<HMDUserActivityStateDetectorStateChangeDelegate> stateChangeDelegate;
@property (nonatomic) long long locationAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)supportsDataSource:(id)a0;

- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (void)unconfigure;
- (id)initWithDataSource:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)handleLocationAuthorizationChange:(long long)a0;
- (void)notifyDetectorStateChangedWithReason:(unsigned long long)a0;

@end
