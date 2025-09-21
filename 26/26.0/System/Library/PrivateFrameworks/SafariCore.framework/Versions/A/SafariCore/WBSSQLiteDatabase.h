@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, WBSSQLiteDatabaseDelegate;

@interface WBSSQLiteDatabase : NSObject {
    NSString *_lastSQLQuery;
}

@property (weak, nonatomic) id<WBSSQLiteDatabaseDelegate> delegate;
@property (readonly, nonatomic) struct sqlite3 { } *handle;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) int lastErrorCode;
@property (readonly, nonatomic) NSString *lastErrorMessage;
@property (readonly, nonatomic) long long lastInsertRowID;
@property (readonly, nonatomic) long long changedRowCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long maximumParameterCount;

+ (id)privateOnDiskDatabaseURL;
+ (void)initialize;
+ (id)writeAheadLogURLForDatabaseURL:(id)a0;
+ (id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)a0;
+ (id)_errorWithErrorCode:(int)a0 userInfo:(id)a1;
+ (id)inMemoryDatabaseURL;

- (BOOL)executeQuery:(id)a0 error:(id *)a1;
- (id)checkIntegrity;
- (void)_reportSevereError:(id)a0;
- (void)dealloc;
- (int)checkpointWriteAheadLogWithLogFrameCount:(int *)a0 checkpointedFrameCount:(int *)a1;
- (id)fetchQuery:(id)a0;
- (BOOL)tryToPerformTransactionInBlock:(id /* block */)a0;
- (BOOL)openWithAccessType:(long long)a0 vfs:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 queue:(id)a1;
- (BOOL)openWithAccessType:(long long)a0 protectionType:(long long)a1 vfs:(id)a2 error:(id *)a3;
- (BOOL)_openWithFlags:(int)a0 useLock:(BOOL)a1 vfs:(id)a2 error:(id *)a3;
- (id)lastErrorWithMethodName:(const char *)a0;
- (void)setBusyTimeout:(double)a0;
- (BOOL)reportErrorWithCode:(int)a0 query:(id)a1 error:(id *)a2;
- (BOOL)openWithAccessType:(long long)a0 error:(id *)a1;
- (id)fetchQuery:(id)a0 stringArguments:(id)a1;
- (BOOL)enableWAL:(id *)a0;
- (int)close;
- (void).cxx_destruct;
- (BOOL)reportErrorWithCode:(int)a0 statement:(struct sqlite3_stmt { } *)a1 error:(id *)a2;

@end
