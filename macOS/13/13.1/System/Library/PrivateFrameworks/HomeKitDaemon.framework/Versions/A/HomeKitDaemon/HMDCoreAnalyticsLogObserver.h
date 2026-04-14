@class NSDictionary, NSString;
@protocol HMDCoreAnalyticsLogObserverDataSource;

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly, weak, nonatomic) id<HMDCoreAnalyticsLogObserverDataSource> dataSource;
@property (retain, nonatomic) NSDictionary *homeConfigurationCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)addHomesCategorizationCommonDimensionToEventDictionary:(id)a0;
- (void)addDeviceCapabilitiesAndEnablementsCommonDimensionsToEventDictionary:(id)a0;
- (void)addDeviceStateCommonDimensionsToEventDictionary:(id)a0;
- (void)addHistogrammedCommonConfigurationDimensionsForLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addAccessoryDetailsFromLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addErrorDetailsFromLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addEventDurationInMillisecondsFromLogEvent:(id)a0 toEventDictionary:(id)a1;
- (id)dictionaryFromEvent:(id)a0;

@end
