@class NSNumber, NSString, AMSSQLiteConnection;

@interface AMSCookieDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (readonly) AMSSQLiteConnection *connection;
@property (readonly) NSNumber *dsid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dataVaultPathForDSID:(id)a0;
+ (id)_databasePathForDSID:(id)a0;
+ (id)cookieDatabaseForDSID:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (BOOL)_executeStatement:(id)a0 columns:(id)a1 forCookieProperties:(id)a2 error:(id *)a3;
- (void)_bindCookieProperties:(id)a0 column:(unsigned long long)a1 position:(int)a2 using:(id)a3;
- (id)initWithConnection:(id)a0 dsid:(id)a1;
- (id)_cookieDictionaryForCursor:(id)a0;
- (BOOL)_removeCookieProperties:(id)a0 error:(id *)a1;
- (BOOL)_addCookieProperties:(id)a0 error:(id *)a1;
- (BOOL)connectionNeedsResetForCorruption:(id)a0;
- (id)cookiePropertiesWithError:(id *)a0;
- (BOOL)updateCookiesWithCookiePropertiesToAdd:(id)a0 cookiePropertiesToRemove:(id)a1 error:(id *)a2;

@end
