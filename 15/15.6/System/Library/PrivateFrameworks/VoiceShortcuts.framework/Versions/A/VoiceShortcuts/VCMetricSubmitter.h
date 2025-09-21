@class WFMetricStatusEvent, VCMetricCheckIn;
@protocol WFDatabaseProvider;

@interface VCMetricSubmitter : NSObject

@property (readonly, nonatomic) VCMetricCheckIn *checkIn;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFMetricStatusEvent *event;

+ (id)activityIdentifier;
+ (void)performWithDatabaseProvider:(id)a0;
+ (void)scheduleWithDatabaseProvider:(id)a0;
+ (void)scheduleWithScheduler:(id)a0 databaseProvider:(id)a1;

- (void).cxx_destruct;
- (void)perform;
- (char)isAppInstalled;
- (char)isSleepEnabled;
- (unsigned int)shortcutsCount:(id)a0;
- (char)addWidgetMetricsToEvent:(id)a0 error:(id *)a1;
- (unsigned int)averageShortcutCountPerFolder:(id)a0;
- (unsigned int)folderCount:(id)a0;
- (char)hasSeenAutoShortcutsSections;
- (char)homeAutomationsPresent:(id *)a0;
- (id)initWithCheckIn:(id)a0 event:(id)a1 databaseProvider:(id)a2;
- (id)initWithDatabaseProvider:(id)a0;
- (char)isSharingEnabled;
- (unsigned int)numberOfAppSessions:(id *)a0;
- (unsigned int)numberOfPersonalAutomationsEnabled:(id)a0;
- (unsigned int)numberOfShortcutRuns:(id)a0;
- (char)personalAutomationsEnabled:(id)a0;
- (unsigned int)sleepShortcutCount:(id)a0;
- (unsigned int)uncategorizedShortcutCount:(id)a0;
- (unsigned int)watchShortcutCount:(id)a0;

@end
