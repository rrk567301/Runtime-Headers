@class PLTimer, NSSet, NSMutableDictionary, NSDictionary, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSMutableArray, PLStateTrackingComposition, PLNSNotificationOperatorComposition;

@interface PLPowerAssertionAgent : PLAgent

@property (retain) PLCFNotificationOperatorComposition *assertionNotification;
@property (retain) PLCFNotificationOperatorComposition *assertionBufferFullNotification;
@property (retain) PLTimer *assertionBufferFullNotificationRearmTimer;
@property (nonatomic) BOOL assertionBufferFullNotificationActive;
@property (retain) NSMutableArray *assertionBufferNotificationTracking;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelNotificiations;
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLCFNotificationOperatorComposition *flushAssertionBufferCFNotification;
@property (retain) PLTimer *runQueryTimer;
@property (retain) PLTimer *assertionSnapShotTimer;
@property (nonatomic) BOOL assertionSnapshotTimerActive;
@property BOOL firstBufferDrain;
@property long long aggregateMaxPIDCount;
@property long long aggregteZeroDeltaCount;
@property (retain) NSMutableDictionary *assertionAggregatedLastSamplePLDataStructure;
@property (retain, nonatomic) NSMutableDictionary *assertionAggregatedLastSample;
@property (readonly) NSDictionary *startEndActionsToEnum;
@property (readonly) NSDictionary *assertTypeToEnum;
@property (readonly) NSSet *logAssertNameForActions;
@property (nonatomic) BOOL lastActivityOverflow;
@property (retain) NSMutableDictionary *assertionUUIDCache;
@property (retain) NSMutableDictionary *UUIDStartEntryCache;
@property (retain) NSMutableDictionary *subSecondUUIDStartEntryCache;
@property BOOL optimizesSubSecondAssertions;
@property (retain) PLNSNotificationOperatorComposition *consoleModeListener;
@property BOOL gameMode;
@property BOOL displayOn;
@property BOOL pluggedIn;
@property (retain) PLStateTrackingComposition *stateTracker;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (id)entryEventForwardDefinitionAssertion;
+ (id)entryEventPointDefinitionBufferStatus;
+ (BOOL)shouldOptimizeSmallAssertions;
+ (id)entryEventPointDefinitionAggregateReset;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionTimedOutProcesses;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;

- (void)logAggregatedAssertionActivity;
- (void)logEventForwardAssertionWithReason:(id)a0 asSnapshot:(BOOL)a1;
- (void)log;
- (void)logSnapshotAtMidnight:(id)a0;
- (void)setAssertionBufferFullNotificationActive:(BOOL)a0 withReason:(id)a1;
- (id)sanitizeAssertionNameForEntry:(id)a0;
- (void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)a0 withPidCount:(int)a1;
- (id)init;
- (void)initOperatorDependancies;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)a0 withPidCount:(int)a1;
- (void)checkAssertionBufferFullNotificationRate;
- (void).cxx_destruct;
- (void)updateDisplayState;
- (void)logInterval:(id)a0;
- (void)logEventForwardAssertion;
- (void)updatePluggedInState;
- (id)assertTypeToEnumMapping;
- (id)bundleIDForAssertionProcessPID:(int)a0;
- (id)startEndActionsToEnumMapping;
- (void)logEventPointAggregateResetWithReason:(short)a0 withPidCount:(int)a1;
- (void)handleStateChange;
- (void)logSnapshot:(id)a0;
- (void)updateOptimizeSubSecondAssertions;

@end
