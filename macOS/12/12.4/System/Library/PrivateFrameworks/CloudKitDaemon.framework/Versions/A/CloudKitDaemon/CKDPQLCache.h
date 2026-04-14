@class NSString, NSArray, PQLConnection, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPQLCache : NSObject {
    NSHashTable *_containers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) unsigned long long openHandles;
@property (readonly, nonatomic) PQLConnection *database;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSArray *createInitialTablesSQL;

- (void).cxx_destruct;
- (void)removeContainer:(id)a0;
- (id)containers;
- (BOOL)openWithError:(id *)a0;
- (id)initWithContainer:(id)a0;
- (BOOL)resetWithError:(id *)a0;
- (BOOL)closeWithError:(id *)a0;
- (id)anyContainer;
- (id)infoToUpgradeFromVersion:(unsigned long long)a0;
- (void)addContainer:(id)a0;
- (BOOL)_setupConnectionWithError:(id *)a0;
- (BOOL)_truncateAndReconnectToDatabaseWithError:(id *)a0;
- (BOOL)removeCorruptDatabaseWithError:(id *)a0;
- (id)_newConnection:(id)a0;
- (BOOL)_setupCacheWithError:(id *)a0;
- (BOOL)_lockedOpenDatabase:(id *)a0;
- (BOOL)removeDatabaseFilesWithError:(id *)a0;
- (void)performOnDBQueue:(id /* block */)a0;
- (BOOL)_closeWithError:(id *)a0 force:(BOOL)a1;
- (BOOL)forceCloseWithError:(id *)a0;

@end
