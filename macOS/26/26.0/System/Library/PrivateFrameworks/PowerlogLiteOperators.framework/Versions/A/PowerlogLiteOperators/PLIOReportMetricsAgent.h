@class PLStateTrackingComposition, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, NSDate;

@interface PLIOReportMetricsAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChangedNotifications;
@property (retain) PLEntryNotificationOperatorComposition *screenstateChangedNotifications;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLNSNotificationOperatorComposition *enhancedScreenStateChangeListener;
@property (retain) PLStateTrackingComposition *stateTracker;
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsSignificantBattery;
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsScreenState;
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsSnapshot;
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsCustom;
@property (retain) NSDate *lastEntryDate;

+ (void)load;

- (void)initOperatorDependancies;
- (id)buildScreenStateSet:(struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
- (void)log;
- (id)init;
- (id)sampleSnapshotForChannelGroup:(id)a0;
- (void)subscribeToChannelSets;
- (id)buildSnapshotSet:(struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
- (id)buildBaseSet:(struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
- (id)sampleDeltaForChannelGroup:(id)a0;
- (void).cxx_destruct;
- (void)sampleDeltaForChannelSets;
- (struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })initGroupChecks;
- (BOOL)isDynamicTable:(id)a0;
- (void)logInit;
- (id)buildCustomSet:(struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *)a0;
- (BOOL)allowlistedChannel:(id)a0;
- (id)channelDictionaryWithChannelSet:(id)a0;
- (id)createCategoryString:(id)a0 forSubgroup:(id)a1;
- (void)logDisplayOffAPWake;
- (void)logIOReportEntry:(id)a0 forCategory:(id)a1 withEntryDate:(id)a2 withAPWakeTime:(double)a3 isInterval:(BOOL)a4;
- (void)logIOReportIntervals:(id)a0 forChannelGroup:(id)a1;
- (void)logIOReportSnapshots:(id)a0;
- (void)logSBC;
- (void)logScreenStateChange;
- (BOOL)skipCurrentIteration:(id)a0 forChannel:(id)a1;

@end
