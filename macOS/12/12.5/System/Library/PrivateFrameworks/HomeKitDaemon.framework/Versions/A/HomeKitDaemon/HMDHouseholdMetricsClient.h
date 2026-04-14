@class HMDMetricsDateProvider, NSArray, HMDEventCountersManager, HMDHouseholdMetricsRequestContributor;
@protocol HMDHouseholdMetricsMessaging;

@interface HMDHouseholdMetricsClient : NSObject <HMDHouseholdDataLogEventProviding>

@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsMessaging> remoteMessageDispatcher;
@property (readonly, nonatomic) HMDHouseholdMetricsRequestContributor *requestContributor;
@property (readonly, nonatomic) NSArray *contributors;
@property (readonly, nonatomic) id /* block */ isDNUEnabledBlock;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)householdDataForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)initWithCountersManager:(id)a0 dateProvider:(id)a1 remoteMessageDispatcher:(id)a2 contributors:(id)a3;
- (void)deleteExpiredCounters;
- (id)initWithCountersManager:(id)a0 dateProvider:(id)a1 remoteMessageDispatcher:(id)a2 contributors:(id)a3 isDNUEnabledBlock:(id /* block */)a4;
- (id)handleRequestMessageWithPayload:(id)a0 outError:(id *)a1;

@end
