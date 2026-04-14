@class KVDictionaryLog;

@interface CKVInstanceInfoLog : NSObject {
    KVDictionaryLog *_log;
}

- (id)init;
- (void).cxx_destruct;
- (id)deviceId;
- (id)userId;
- (id)lastMaintenance;
- (id)lastSkitRebuild;
- (void)recordDeviceId:(id)a0;
- (id)initWithDataDirectory:(id)a0 dataProtectionClass:(int)a1;
- (id)lastDatabaseCleanup;
- (id)modifiedDatabaseRowsSinceCleanup;
- (void)recordDatabaseCleanup;
- (void)recordDatabaseRowsModified:(unsigned long long)a0;
- (void)recordDeviceId:(id)a0 userId:(id)a1;
- (void)recordMaintenance;
- (void)recordSkitRebuild;

@end
