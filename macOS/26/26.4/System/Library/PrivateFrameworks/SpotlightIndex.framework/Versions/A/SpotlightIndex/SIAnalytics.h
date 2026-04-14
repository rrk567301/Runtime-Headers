@class NSString, NSMutableDictionary, NSDictionary;

@interface SIAnalytics : NSObject {
    NSString *_heartbeatPath;
    NSMutableDictionary *_heartbeatData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _heartbeatLock;
    NSDictionary *_indexesData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _indexesLock;
    unsigned long long _errorFlags;
    id /* block */ _resourcesCallback;
    BOOL _readHeartbeat;
}

@property (readonly, nonatomic) NSString *parentDirectoryPath;
@property (readonly, nonatomic) BOOL isCoreSpotlight;
@property (readonly, nonatomic) BOOL isHeartbeatIndex;

+ (void)wait;
+ (id)sharedInstance;
+ (id)queue;
+ (id)migrateFromLegacyHeartbeatData:(id)a0;
+ (id)getCurrentSpotlightVersionWithRoots:(BOOL *)a0;
+ (id)getPreviousBuild;
+ (BOOL)hasSpotlightRoots;
+ (BOOL)isHeartbeatReportingDisabled;
+ (BOOL)isIndexDropReportingDisabled;
+ (void)recordRequestsForIndex:(id)a0 adds:(unsigned long long)a1 updates:(unsigned long long)a2 deletes:(unsigned long long)a3;
+ (id)runCommand:(id)a0;
+ (void)sendHeartbeatEvent;
+ (void)sendIndexDropEventWithCorruptIndex:(id)a0 path:(id)a1 readOnly:(BOOL)a2 reason:(struct si_error_s { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; char x4[1024]; } *)a3;
+ (void)setPurgeTimestampForIndex:(id)a0 start:(BOOL)a1;
+ (void)setPurgeability:(BOOL)a0 forIndex:(id)a1;
+ (void)setSpotlightVersion;

- (long long)eventCount;
- (void)dealloc;
- (void)sendIndexDropEventWithCorruptIndex:(id)a0 prefix:(id)a1 path:(id)a2 readOnly:(BOOL)a3 reason:(struct si_error_s { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; char x4[1024]; } *)a4;
- (void)setPurgeTimestamp:(long long)a0 prefix:(id)a1 start:(BOOL)a2;
- (BOOL)readFromHeartbeatFileWithError:(id *)a0;
- (id)createDropDataForPrefix:(id)a0 path:(id)a1 error:(id *)a2;
- (id)createHeartbeatDataWithRefresh:(BOOL)a0 currentTimestamp:(long long)a1 error:(id *)a2;
- (id)createHeartbeatDataWithRefresh:(BOOL)a0 error:(id *)a1;
- (void)enumerateIndexDropReportsWithBlock:(id /* block */)a0;
- (void)enumerateIndexDropReportsWithStartDate:(id)a0 block:(id /* block */)a1;
- (id)getIndexDataForPrefix:(id)a0;
- (id)getPreviousBuild;
- (id)indexDropReportsPath;
- (id)initWithParentDirectoryPath:(id)a0 corespotlight:(BOOL)a1 heartbeatIndex:(BOOL)a2 resourcesCallback:(id /* block */)a3;
- (void)initializeSharedHearbeatFields;
- (void)populateIndexDropData:(id)a0 index:(id)a1 prefix:(id)a2 reason:(struct si_error_s { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; char x4[1024]; } *)a3 error:(id *)a4;
- (void)recordLocaleChange:(long long)a0;
- (void)recordOpen:(long long)a0 forIndex:(id)a1 dirty:(BOOL)a2;
- (void)recordRequestsForIndex:(id)a0 adds:(unsigned long long)a1 updates:(unsigned long long)a2 deletes:(unsigned long long)a3;
- (BOOL)refreshSharedHeartbeatFieldsWithError:(id *)a0;
- (void)resetAfterHeartbeat;
- (id)runCommand:(id)a0;
- (id)searchDiagnosticReportsPath;
- (void)sendHeartbeatEvent;
- (void)sendHeartbeatEventWithData:(id)a0 withReset:(BOOL)a1;
- (void)sendIndexDropEventWithData:(id)a0;
- (void)sendLegacyHeartbeatEventWithData:(id)a0;
- (void)sendLegacyIndexDropEventWithData:(id)a0 prefix:(id)a1 readOnly:(BOOL)a2 reason:(struct si_error_s { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; char x4[1024]; } *)a3;
- (void)sendVectorIndexDropForIndex:(id)a0 vectorCount:(unsigned int)a1 readOnly:(BOOL)a2 prefix:(id)a3 propertyName:(id)a4 dropReason:(unsigned int)a5;
- (void)setHeartbeatTimestamp:(long long)a0 prefix:(id)a1 key:(id)a2;
- (void)setPurgeability:(BOOL)a0 prefix:(id)a1;
- (BOOL)shouldReportIndexDrop:(id)a0;
- (id)usageInfoForCommand:(id)a0;
- (BOOL)writeToHeartbeatFileWithError:(id *)a0;

@end
