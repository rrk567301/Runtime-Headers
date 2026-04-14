@class NSHashTable;

@interface WFCloudKitSyncEventLogger : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_log_event;
    BOOL _postNotifications;
    NSHashTable *_observers;
}

+ (id)createPersistedSyncEventLogger;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)events;
- (void)logError:(id)a0;
- (void)addObserver:(id)a0;
- (void)logEvent:(id)a0;
- (void).cxx_destruct;
- (void)clearLogs;
- (void)logDatabaseInsert:(id)a0 value:(id)a1;
- (void)logDatabaseModify:(id)a0 value:(id)a1;
- (void)logDatabaseRemove:(id)a0;
- (void)logDeletionFetched:(id)a0;
- (void)logDeviceRecords:(id)a0;
- (void)logRecordDeleteFailed:(id)a0 error:(id)a1;
- (void)logRecordDeleted:(id)a0;
- (void)logRecordFetched:(id)a0;
- (void)logRecordPushFailed:(id)a0 error:(id)a1;
- (void)logRecordPushed:(id)a0;
- (id)eventsWithType:(int)a0;
- (BOOL)_applySchema;
- (BOOL)_applySchemaIfNecessary;
- (id)_eventForDatabaseDescriptor:(id)a0 value:(id)a1;
- (id)_eventForDeviceRecords:(id)a0;
- (id)_eventForRecord:(id)a0;
- (id)_eventForRecordID:(id)a0;
- (id)_eventsWithFilter:(id)a0 newestFirst:(BOOL)a1;
- (id)_initWithFilename:(const char *)a0 flags:(int)a1 postNotifications:(BOOL)a2;
- (void)_logEventWithType:(int)a0 event:(id)a1;
- (void)clearOldLogs;
- (id)eventsSinceDate:(id)a0;
- (id)initWithPersistedURL:(id)a0;

@end
