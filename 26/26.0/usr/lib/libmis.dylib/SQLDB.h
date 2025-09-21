@class NSURL, NSObject;
@protocol OS_dispatch_semaphore;

@interface SQLDB : NSObject {
    BOOL _readonly;
    struct sqlite3 { } *_db;
}

@property (readonly, nonatomic) NSURL *dbURL;
@property (readonly, nonatomic) NSURL *walURL;
@property (readonly, nonatomic) NSURL *shmURL;
@property (readonly, nonatomic) double totalSizeMB;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *transactionSemaphore;

+ (id)databaseWithURL:(id)a0;

- (id)lastInsertRowID;
- (int)checkpoint;
- (void)dealloc;
- (int)transaction:(id /* block */)a0;
- (id)init;
- (id)initWithDatabaseURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0 asReadOnly:(BOOL)a1;
- (void)deleteSetting:(id)a0;
- (int)executeQuery:(id)a0 withBind:(id /* block */)a1 withCancellableResults:(id /* block */)a2;
- (int)executeQuery:(id)a0 withBind:(id /* block */)a1 withResults:(id /* block */)a2;
- (id)readSetting:(id)a0;
- (void)setSetting:(id)a0 toValue:(id)a1;
- (void)setupPermissions;
- (BOOL)setupSchema;
- (unsigned long long)tableRowCount:(id)a0;
- (int)transaction:(id /* block */)a0 immediate:(BOOL)a1;

@end
