@class PLTimer, NSMutableDictionary, PLCoreStorage, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLOperator : NSObject

@property (retain) NSMutableDictionary *filterDefinitions;
@property (retain) NSMutableDictionary *filterDeltaLastEntryIDs;
@property (retain) NSMutableArray *bufferedEntries;
@property (retain) PLTimer *triggerBufferFlush;
@property (retain) NSMutableDictionary *lastLogDateForEntryKey;
@property (readonly, weak) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly, weak) PLCoreStorage *storage;
@property (readonly, weak) NSString *className;
@property (readonly, weak) NSString *storageQueueName;

+ (void)load;
+ (void)setEnabled:(BOOL)a0;
+ (BOOL)isEnabled;
+ (id)className;
+ (id)defaults;
+ (BOOL)isDebugEnabled;
+ (id)operator;
+ (BOOL)fullMode;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)storageQueueName;
+ (id)entryKeyForType:(id)a0 andName:(id)a1;
+ (id)entryKeyForType:(id)a0 andName:(id)a1 isDynamic:(BOOL)a2;
+ (BOOL)isDebugEnabledForKey:(id)a0;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryDefinitions;
+ (id)entryKeys;
+ (id)trimConditionsWithEntryKey:(id)a0 withTrimDate:(id)a1 withDuration:(id)a2 withStartDateKey:(id)a3;
+ (id)trimConditionsWithEntryKey:(id)a0 withTrimDate:(id)a1 withCount:(id)a2 withStartDateKey:(id)a3;
+ (id)createEntriesForMetrics:(id)a0 withData:(id)a1 withDate:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)flushBuffer;
- (id)defaultObjectForKey:(id)a0;
- (void)log;
- (BOOL)isDebugEnabled;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;
- (void)updateEntry:(id)a0 withBlock:(id /* block */)a1;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logRequestNotification:(id)a0;
- (void)setupFilterRequest:(id)a0;
- (BOOL)isDebugEnabledForKey:(id)a0;
- (id)entryDefinitions;
- (id)entryKeys;
- (BOOL)defaultBoolForKey:(id)a0;
- (double)defaultDoubleForKey:(id)a0;
- (long long)defaultLongForKey:(id)a0;
- (id)initForTest;
- (double)timeIntervalSinceLastLogForEntryKey:(id)a0;
- (void)logFromCFCallback:(id)a0;
- (void)enableBufferFlushTimer:(unsigned long long)a0;
- (void)logProportionateAggregateEntry:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)logEntry:(id)a0;
- (void)logEntries:(id)a0 withGroupID:(id)a1;
- (BOOL)shouldWriteEntry:(id)a0 withDebug:(BOOL)a1;
- (void)postEntries:(id)a0;
- (void)postEntries:(id)a0 withGroupID:(id)a1;
- (BOOL)postFilteredNotificationForEntry:(id)a0 withFilteredDefition:(id)a1 withNotificationName:(id)a2;
- (void)subscribeNotificationsForEntries;
- (void)logForSubsystem:(id)a0 category:(id)a1 data:(id)a2;
- (void)logForSubsystem:(id)a0 category:(id)a1 data:(id)a2 date:(id)a3;

@end
