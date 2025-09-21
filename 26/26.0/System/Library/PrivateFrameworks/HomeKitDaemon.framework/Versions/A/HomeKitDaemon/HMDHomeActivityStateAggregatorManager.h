@class HMDUserActivityReportFactory, NSString, NSArray, HMDHomeActivityStateMachine, HMDHomeActivityHomeAwayAggregator, HMFFuture, HMFPromise;
@protocol HMDHomeUserActivityStatesDetails, HMDHomeActivityStateManagerDataSource, HMDHomeActivityStateAggregatorManagerStorage;

@interface HMDHomeActivityStateAggregatorManager : HMFObject <HMFLogging, HMDHomeActivityStateMachineTransitionDelegate, HMDHomeActivityStateHomePresenceReceiverDelegate, HMDHomeActivityStateAggregatorManager, HMDDumpState> {
    id<HMDHomeActivityStateManagerDataSource> _dataSource;
    HMDUserActivityReportFactory *_userActivityReportFactory;
    NSArray *_aggregators;
    id<HMDHomeActivityStateAggregatorManagerStorage> _storage;
    HMDHomeActivityStateMachine *_homeActivityStateMachine;
    NSString *_refreshTimerIdentifier;
    HMDHomeActivityHomeAwayAggregator *_homeAwayStateAggregator;
    HMFPromise *_configurePromise;
    HMFFuture *_configureFuture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) id<HMDHomeUserActivityStatesDetails> userActivityStatesDetails;

+ (id)logCategory;
+ (BOOL)isReportAllowed:(id)a0 sourceDevice:(id)a1;

- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (void)registerForNotifications;
- (void)unconfigure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)handleRemovedAccessory:(id)a0;
- (void)_handleUserActivityStateChanged;
- (void)auditAggegators;
- (void)handleBackgroundTaskTimerFired:(id)a0;
- (id)_aggregatorOfType:(unsigned long long)a0;
- (void)_processUserPresenceWithAuthStatus:(id)a0 regionStatus:(id)a1 updateReason:(id)a2 forUser:(id)a3 fromDevice:(id)a4;
- (void)configureWithPresenceReceiver:(id)a0 completion:(id /* block */)a1;
- (BOOL)deserializeUserActivityReportFromSerializedReport:(id)a0 outContributorType:(unsigned long long *)a1 outIsUnset:(BOOL *)a2 outReportPayload:(id *)a3;
- (BOOL)deserializeUserActivityReportsFromMessage:(id)a0 outReports:(id *)a1;
- (void)didReceivePresenceUpdateForUser:(id)a0 withAuthorization:(id)a1 region:(id)a2 updateReason:(id)a3 fromDevice:(id)a4;
- (void)handleAdaptiveTemperatureAutomationsNotificationToUpdateEnabledContributors:(id)a0;
- (void)handleCancelHoldMessage:(id)a0;
- (void)handleHomeUserRemovedNotification:(id)a0;
- (void)handleRefreshTimerFired;
- (void)handleUserActivityReportUpdated:(id)a0;
- (void)handleUserRequestToUpdateHomeActivityState:(id)a0;
- (void)handleUserRestrictedGuestScheduleEnded:(id)a0;
- (void)handleUserRestrictedGuestScheduleStarted:(id)a0;
- (id)initWithDataSource:(id)a0 initialStateHoldDetails:(id)a1;
- (BOOL)isAdaptiveTemperatureAutomationsEnabledInHome:(id)a0 shouldWaitToConfigure:(BOOL *)a1;
- (BOOL)isContributionAllowedByUser:(id)a0 forContributorType:(unsigned long long)a1;
- (id)nextRefreshTimestamp;
- (void)processUserPresenceWithAuthStatus:(id)a0 regionStatus:(id)a1 updateReason:(id)a2 forUser:(id)a3 fromDevice:(id)a4;
- (void)scheduleRefreshTimer;
- (void)stateMachineDidTransitionToActivityState:(unsigned long long)a0 withHoldInfo:(id)a1 transitionalStateEndDate:(id)a2 reason:(long long)a3;
- (void)updateEnabledContributors;

@end
