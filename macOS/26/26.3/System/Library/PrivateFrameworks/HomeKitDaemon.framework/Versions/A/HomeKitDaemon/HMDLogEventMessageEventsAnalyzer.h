@class HMDEventCounterGroup, NSUserDefaults, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventMessageEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) HMDEventCounterGroup *residentSyncGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *homeManagerMessagesGroup;

+ (id)managedEventCounterRequestGroups;

- (unsigned char)transportTypeForRemoteMessageCounterRequestGroup:(id)a0;
- (void)observeEvent:(id)a0;
- (void)handlePrimaryResidentChangedNotification:(id)a0;
- (void)_handleXPCMessageCounterLogEvent:(id)a0;
- (void)_handleRemoteMessageLogEvent:(id)a0;
- (void)submitRemoteMessageCounters;
- (unsigned char)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)a0;
- (void)registerEWSTriggersWithDataSource:(id)a0;
- (void)submitXPCMessageCounters;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)submitXPCMessageCountersForGroup:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void).cxx_destruct;
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)a0 peerInformation:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)a0 peerInformation:(id)a1 transportType:(int)a2 messageDirectionSending:(BOOL)a3 identifier:(id)a4;
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)a0 messageDirectionSending:(BOOL)a1;
- (void)_updateResidentSyncCountersWithRemoteMessageLogEvent:(id)a0;
- (void)submitRemoteMessageCountersForGroup:(id)a0;
- (void)submitDailyMessageEvents;

@end
