@class HMMDateProvider, NSDictionary, HMDEventCountersManager;
@protocol HMDHouseholdMetricsMessaging, HMDHouseholdMetricsRequestCountProvider;

@interface HMDHouseholdMetricsClient : HMFObject <HMDHouseholdMetricsLogEventProviding>

@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsMessaging> remoteMessageDispatcher;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsRequestCountProvider> requestCountProvider;
@property (readonly, nonatomic) NSDictionary *logEventFactories;
@property (readonly, nonatomic) id /* block */ isDNUEnabledBlock;

+ (id)logCategory;

- (void)deleteExpiredCounters;
- (id)initWithCountersManager:(id)a0 dateProvider:(id)a1 remoteMessageDispatcher:(id)a2 requestCountProvider:(id)a3 logEventFactories:(id)a4 isDNUEnabledBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (id)handleRequestMessageWithPayload:(id)a0 outError:(id *)a1;
- (id)initWithCountersManager:(id)a0 dateProvider:(id)a1 remoteMessageDispatcher:(id)a2 requestCountProvider:(id)a3 logEventFactories:(id)a4;
- (void)dealloc;
- (id)householdMetricsForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (void)handleRequest:(id)a0;

@end
