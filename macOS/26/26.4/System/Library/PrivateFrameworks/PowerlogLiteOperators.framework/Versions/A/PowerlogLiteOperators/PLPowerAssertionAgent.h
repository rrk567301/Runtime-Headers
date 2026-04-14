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

+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionTimedOutProcesses;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionAggregateReset;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (BOOL)shouldOptimizeSmallAssertions;
+ (id)entryEventForwardDefinitionAssertion;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (id)entryEventPointDefinitionBufferStatus;

- (void)initOperatorDependancies;
- (void)log;
- (void)setAssertionBufferFullNotificationActive:(BOOL)a0 withReason:(id)a1;
- (id)sanitizeAssertionNameForEntry:(id)a0;
- (id)startEndActionsToEnumMapping;
- (void)logEventPointAggregateResetWithReason:(short)a0 withPidCount:(int)a1;
- (void)logEventForwardAssertion;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)a0 withPidCount:(int)a1;
- (void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)a0 withPidCount:(int)a1;
- (void)logEventForwardAssertionWithReason:(id)a0 asSnapshot:(BOOL)a1;
- (void)logAggregatedAssertionActivity;
- (void)handleStateChange;
- (id)assertTypeToEnumMapping;
- (void)checkAssertionBufferFullNotificationRate;
- (void).cxx_destruct;
- (void)logSnapshotAtMidnight:(id)a0;
- (void)updateDisplayState;
- (void)logSnapshot:(id)a0;
- (id)init;
- (void)updateOptimizeSubSecondAssertions;
- (void)logInterval:(id)a0;
- (void)updatePluggedInState;
- (id)bundleIDForAssertionProcessPID:(int)a0;

@end
