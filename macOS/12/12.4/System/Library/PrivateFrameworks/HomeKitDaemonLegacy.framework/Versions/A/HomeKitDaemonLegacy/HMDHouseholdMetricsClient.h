@class HMDMetricsDateProvider, NSString, NSArray, HMDEventCountersManager;
@protocol HMDHouseholdMetricsMessaging;

@interface HMDHouseholdMetricsClient : NSObject <HMDHouseholdDataLogEventContributing, HMDHouseholdDataLogEventProviding>

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsMessaging> remoteMessageDispatcher;
@property (readonly, nonatomic) NSArray *contributors;
@property (readonly, nonatomic) id /* block */ isDNUEnabledBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)householdDataForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)initWithCountersManager:(id)a0 dateProvider:(id)a1 remoteMessageDispatcher:(id)a2;
- (void)deleteExpiredCounters;
- (id)initWithCountersManager:(id)a0 dateProvider:(id)a1 remoteMessageDispatcher:(id)a2 contributors:(id)a3 isDNUEnabledBlock:(id /* block */)a4;
- (id)handleRequestMessageWithPayload:(id)a0 outError:(id *)a1;
- (id)groupForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (void)populateHouseholdMetricLogEvent:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2;
- (void)deleteCountersOnOrBeforeDate:(id)a0;
- (void)deleteCountersOnOrAfterDate:(id)a0;

@end
