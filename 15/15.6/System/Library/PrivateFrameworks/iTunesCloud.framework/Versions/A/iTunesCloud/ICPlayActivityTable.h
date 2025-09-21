@class NSString, NSObject, ICSQLiteConnection;
@protocol OS_dispatch_queue;

@interface ICPlayActivityTable : NSObject {
    ICSQLiteConnection *_databaseConnection;
    NSString *_databasePath;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
}

+ (char)_setupDatabase:(id)a0;
+ (id)_defaultDatabasePath;
+ (id)_eventsDatabaseTableName;
+ (void)_migrateDatabaseFiles;
+ (id)_propertiesDatabaseTableName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabasePath:(id)a0;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (char)_removeDatabaseReturningError:(id *)a0;
- (char)_setValue:(id)a0 forDatabasePropertyKey:(id)a1;
- (id)_valueForDatabasePropertyKey:(id)a0;
- (id)eventsRevisionVersionToken;
- (char)getPlayActivityEvents:(id *)a0 storeAccountID:(long long)a1 limit:(unsigned long long)a2 returningError:(id *)a3;
- (char)getStoreAccounts:(id *)a0 returningError:(id *)a1;
- (char)hasPendingPlayActivityEvents:(char *)a0 returningError:(id *)a1;
- (char)insertPlayActivityEvent:(id)a0 returningError:(id *)a1;
- (char)removePlayActivityEvents:(id)a0 returningError:(id *)a1;

@end
