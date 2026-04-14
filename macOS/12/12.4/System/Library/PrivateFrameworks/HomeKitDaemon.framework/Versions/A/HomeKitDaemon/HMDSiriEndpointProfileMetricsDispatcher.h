@class NSUUID, NSString, NSArray;
@protocol HMMLogEventSubmitting, HMDSiriEndpointProfileMetricsDispatcherDataSource;

@interface HMDSiriEndpointProfileMetricsDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>

@property (readonly, copy) NSUUID *homeUUID;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (weak) id<HMDSiriEndpointProfileMetricsDispatcherDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)dataSourceShouldSubmitRoutineConfigurationEvent;
- (id)fetchAccessorySettingFields;
- (void)submitRoutineConfigurationEventWithAccessorySettingFields:(id)a0;
- (id)dataSourceAccessoryCategoryType;
- (id)dataSourceProfileFields;
- (id)dataSourceCompositeSettingsControllerManager;
- (void)submitRoutineConfigurationEvent;
- (id)initWithAccessoryUUID:(id)a0 homeUUID:(id)a1 logEventSubmitter:(id)a2;

@end
