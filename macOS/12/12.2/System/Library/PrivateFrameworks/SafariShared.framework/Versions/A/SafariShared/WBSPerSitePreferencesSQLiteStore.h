@class NSURL, WBSSQLiteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)sharedStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (void)closeDatabase;
- (void)setValue:(id)a0 ofPreference:(long long)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeAllPreferenceValuesFromPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(long long)a1 completionHandler:(id /* block */)a2;
- (void)getValueOfPreference:(long long)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getDefaultValueForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setDefaultValue:(id)a0 forPreference:(long long)a1 completionHandler:(id /* block */)a2;
- (void)getAllDomainsConfiguredForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (int)_migrateToSchemaVersion_2;
- (void)getAllPreferenceInformationForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (void)getTimestampAndValueOfPreference:(long long)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)setValue:(id)a0 ofPreference:(long long)a1 forDomain:(id)a2 includeTimestamp:(BOOL)a3 completionHandler:(id /* block */)a4;
- (int)_createFreshDatabaseSchema;
- (void)_openDatabase;
- (void)_closeDatabase;
- (void)_openDatabaseIfNecessary;
- (BOOL)_isDatabaseOpen;
- (void)getValuesOfPreferences:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (id)_queryListForPreferences:(id)a0;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (void)getValuesOfPreference:(long long)a0 forDomains:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)removePreferenceValuesForDomainPrefixes:(id)a0 fromPreferences:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllPreferenceValuesFromPreferences:(id)a0 completionHandler:(id /* block */)a1;

@end
