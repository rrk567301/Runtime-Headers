@class NSString, AMSSQLiteConnection;

@interface AMSCookieDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (readonly) AMSSQLiteConnection *connection;
@property (readonly, copy) NSString *dbPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cleanUpCookieDatabasesWithValidIdentifiers:(id)a0 fileManager:(id)a1;
+ (id)_rootDataVaultPathWithError:(id *)a0;
+ (id)cookieDatabaseForIdentifiers:(id)a0 error:(id *)a1 fileManager:(id)a2;
+ (void)_cleanUpProtectionClassAtPath:(id)a0 fileManager:(id)a1;
+ (id)cookieDatabaseForIdentifiers:(id)a0 error:(id *)a1;
+ (id)cookieDatabaseForIdentifier:(id)a0 error:(id *)a1;
+ (id)_databasePathForIdentifiers:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (id)_databasePathForIdentifier:(id)a0 error:(id *)a1;
+ (id)databasePathForIdentifiers:(id)a0 error:(id *)a1;
+ (id)_dataVaultPathForIdentifier:(id)a0 error:(id *)a1;

- (id)initWithConnection:(id)a0 path:(id)a1;
- (void)_bindCookieProperties:(id)a0 column:(unsigned long long)a1 position:(int)a2 using:(id)a3;
- (void)dealloc;
- (BOOL)connection:(id)a0 needsResetForCorruptionError:(id)a1 error:(out id *)a2;
- (BOOL)_removeCookieProperties:(id)a0 error:(id *)a1;
- (id)_cookieDictionaryForCursor:(id)a0;
- (BOOL)_executeStatement:(id)a0 columns:(id)a1 forCookieProperties:(id)a2 error:(id *)a3;
- (BOOL)updateCookiesWithCookiePropertiesToAdd:(id)a0 cookiePropertiesToRemove:(id)a1 error:(id *)a2;
- (BOOL)_addCookieProperties:(id)a0 error:(id *)a1;
- (id)cookiePropertiesWithError:(id *)a0;
- (void)close;
- (void).cxx_destruct;

@end
