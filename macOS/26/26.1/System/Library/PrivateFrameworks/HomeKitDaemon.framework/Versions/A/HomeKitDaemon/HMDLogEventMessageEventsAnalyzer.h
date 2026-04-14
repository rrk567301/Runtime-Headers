@class HMDEventCountersManager, HMDEventCounterGroup, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDEventCounterGroup *residentSyncGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *homeManagerMessagesGroup;

+ (id)managedEventCounterRequestGroups;

- (void)submitRemoteMessageCountersForGroup:(id)a0;
- (void)submitXPCMessageCounters;
- (void)_handleRemoteMessageLogEvent:(id)a0;
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)a0 messageDirectionSending:(BOOL)a1;
- (void)observeEvent:(id)a0;
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)a0 peerInformation:(id)a1;
- (void)resetAggregationAnalysisContext;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (void)submitXPCMessageCountersForGroup:(id)a0;
- (void)_handleXPCMessageCounterLogEvent:(id)a0;
- (void)_updateResidentSyncCountersWithRemoteMessageLogEvent:(id)a0;
- (void).cxx_destruct;
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)a0 peerInformation:(id)a1 transportType:(int)a2 messageDirectionSending:(BOOL)a3 identifier:(id)a4;
- (unsigned char)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void)submitRemoteMessageCounters;
- (void)registerEWSTriggersWithDataSource:(id)a0;
- (void)submitDailyMessageEvents;
- (unsigned char)transportTypeForRemoteMessageCounterRequestGroup:(id)a0;

@end
