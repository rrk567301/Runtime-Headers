@class CCSetChangeRegistry, NSURL, KVDictionaryLog, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface CKVTaskManagerInfo : NSObject {
    KVDictionaryLog *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_migrationStartTime;
}

@property (readonly, nonatomic) NSURL *donateDirectory;
@property (readonly, nonatomic) CCSetChangeRegistry *changeRegistry;

- (void).cxx_destruct;
- (id)schemaVersion;
- (char)clear:(id *)a0;
- (id)siriLanguageCode;
- (id)initWithRootDirectoryURL:(id)a0 error:(id *)a1;
- (id)lastMaintenance;
- (id)dictationLanguageCodes;
- (char)didCompleteMigrationMoreRecentlyThanMaintenance;
- (char)recordMaintenanceCompleted:(id *)a0;
- (char)recordMigrationCompletedWithSettings:(id)a0 error:(id *)a1;
- (char)shouldRunMigration;
- (char)updateSchemaVersion:(id)a0 error:(id *)a1;
- (char)updateSiriLanguageCode:(id)a0 dictationLanguageCodes:(id)a1 error:(id *)a2;

@end
