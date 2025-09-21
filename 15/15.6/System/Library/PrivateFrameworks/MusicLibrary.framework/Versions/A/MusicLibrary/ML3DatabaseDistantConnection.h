@class MLMediaLibraryService, NSUUID;
@protocol ML3DatabaseDistantConnectionDelegate;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {
    MLMediaLibraryService *_mediaLibraryService;
    NSUUID *_currentTransactionID;
    char _connectionOpen;
}

@property (weak, nonatomic) id<ML3DatabaseDistantConnectionDelegate> distantDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (char)close;
- (char)isOpen;
- (char)isReadOnly;
- (void)setReadOnly:(char)a0;
- (id)initWithDatabasePath:(id)a0;
- (char)registerModule:(id)a0;
- (char)_openWithFlags:(int)a0;
- (char)_internalBeginTransactionWithBehaviorType:(unsigned long long)a0;
- (char)_internalBeginTransactionWithBehaviorType:(unsigned long long)a0 isRetry:(char)a1;
- (char)_internalEndTransactionAndCommit:(char)a0;
- (id)_internalExecuteQuery:(id)a0 withParameters:(id)a1 limitProperty:(id)a2 limitValue:(long long)a3;
- (char)_internalExecuteUpdate:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (void)_serviceTerminatedTransactionNotification:(id)a0;
- (struct sqlite3 { } *)_sqliteHandle;
- (int)checkpointDatabase;
- (id)currentTransactionID;
- (id)openBlobInTable:(id)a0 column:(id)a1 row:(long long)a2 readOnly:(char)a3;
- (char)registerFunctionName:(id)a0 argumentCount:(int)a1 block:(id /* block */)a2;
- (char)registerFunctionName:(id)a0 argumentCount:(int)a1 functionPointer:(void /* function */ *)a2 userData:(void *)a3;
- (char)shouldCacheStatements;

@end
