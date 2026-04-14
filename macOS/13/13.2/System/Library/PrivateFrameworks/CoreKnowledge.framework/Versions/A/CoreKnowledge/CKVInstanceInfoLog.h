@class CKVDictionaryLog;

@interface CKVInstanceInfoLog : NSObject {
    CKVDictionaryLog *_log;
}

- (id)init;
- (void).cxx_destruct;
- (id)deviceId;
- (id)userId;
- (id)initWithDataDirectory:(id)a0 dataProtectionClass:(int)a1;
- (id)lastMaintenance;
- (void)recordMaintenance;
- (id)lastSkitRebuild;
- (void)recordSkitRebuild;
- (id)modifiedDatabaseRowsSinceCleanup;
- (void)recordDatabaseRowsModified:(unsigned long long)a0;
- (id)lastDatabaseCleanup;
- (void)recordDatabaseCleanup;
- (void)recordDeviceId:(id)a0 userId:(id)a1;

@end
