@class WBSSQLiteDatabase, NSURL, WBSSafariBookmarksSyncAgentProxy, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (retain, nonatomic) WBSSafariBookmarksSyncAgentProxy *syncProxy;

+ (id)sharedStore;
+ (id)defaultDatabaseURL;
+ (id)staticSyncablePerSiteSettings;
+ (BOOL)isPreferenceSyncable:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (void)closeDatabase;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (int)_createFreshDatabaseSchema;
- (void)_openDatabase;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 includeTimestamp:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 withTimestamp:(id)a3 completionHandler:(id /* block */)a4;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getValuesOfPreferences:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getValuesOfPreference:(id)a0 forDomains:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getAllDomainsConfiguredForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePreferenceValuesForDomainPrefixes:(id)a0 fromPreferences:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDefaultValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDefaultValue:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)getTimestampAndValueOfPreference:(id)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAllPreferenceInformationForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllPreferenceValuesFromPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllPreferenceValuesFromPreferences:(id)a0 completionHandler:(id /* block */)a1;
- (void)savePerSiteSettingCloudKitRecordToDisk:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSyncDataForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSyncDataForPreference:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDeletedCloudKitSyncDataForRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePreferenceValueWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllCloudKitRecordsWithCompletionHandler:(id /* block */)a0;
- (void)removeTombstoneWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllSyncData;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 domain:(id)a2 recordName:(id)a3 completionHandler:(id /* block */)a4;
- (void)_setDeletedCloudKitSyncData:(id)a0 forRecordName:(id)a1 completionHandler:(id /* block */)a2;
- (id)_queryListForPreferences:(id)a0;
- (void)_openDatabaseIfNecessary;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_5;
- (BOOL)_isDatabaseOpen;
- (void)_closeDatabase;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;

@end
