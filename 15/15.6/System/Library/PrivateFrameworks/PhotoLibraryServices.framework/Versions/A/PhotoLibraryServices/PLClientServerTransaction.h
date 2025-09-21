@class NSString, NSSet, PLPhotoLibraryPathManager;

@interface PLClientServerTransaction : NSObject

@property (copy, nonatomic) NSString *transactionToken;
@property (readonly, nonatomic) NSSet *changeScopes;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

+ (id)beginClientTransactionWithChangeScopes:(id)a0 pathManager:(id)a1 identifier:(const char *)a2;
+ (id)beginServerTransactionWithToken:(id)a0 changeScopes:(id)a1 pathManager:(id)a2 identifier:(const char *)a3;
+ (id)descriptionOfTransactionScopes:(id)a0;
+ (id)_changeScopesFromXPCDictionary:(id)a0;
+ (void)addTransaction:(id)a0 toXPCDictionary:(id)a1;
+ (id)_allTransactionPathsForPathManager:(id)a0;
+ (char)_archiveRecoveryHistoryForPathManager:(id)a0 error:(id *)a1;
+ (void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)a0 sqliteErrorHandler:(id /* block */)a1;
+ (void)_cleanupAllTransactionsScopesByPath:(id)a0;
+ (id)_filePathForTransactionWithToken:(id)a0 pathManager:(id)a1;
+ (char)_hasExcessiveRecoveryAttemptsForPathManager:(id)a0;
+ (char)_isOutstandingTransactionAtPath:(id)a0 getScopeValues:(unsigned long long *)a1;
+ (id)_libraryURLFromXPCDictionary:(id)a0;
+ (id)_outstandingTransactionScopesByPathForPathManager:(id)a0;
+ (unsigned long long)_readScopeValuesFromFileDescriptor:(int)a0;
+ (void)_recordRecoveryAttemptForPathManager:(id)a0;
+ (id)_recoveryHistoryFilePathForPathManager:(id)a0;
+ (id)_scopeValuesByScope;
+ (id)_serverTransactionForPathManager:(id)a0 isNew:(char *)a1 identifier:(const char *)a2;
+ (id)_transactionTokenFromXPCDictionary:(id)a0;
+ (void)addTransaction:(id)a0 toUserInfo:(id)a1;
+ (id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)a0 pathManager:(id)a1 identifier:(const char *)a2;
+ (void)cancelOutstandingTransactionHandlerTimer:(id)a0;
+ (id)descriptionOfAllTransactionFilesForPathManager:(id)a0;
+ (id)handleOutstandingTransactionsForPathManager:(id)a0 sqliteErrorHandler:(id /* block */)a1 handler:(id /* block */)a2;
+ (void)removeTransactionFromUserInfo:(id)a0;
+ (unsigned long long)scopeValuesFromScopes:(id)a0;
+ (id)scopesFromScopeValues:(unsigned long long)a0;
+ (id)serverTransactionQueue;
+ (id)transactionFromUserInfo:(id)a0;

- (void).cxx_destruct;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)a0;
- (id)initWithPathManager:(id)a0;
- (void)stillAlive;
- (void)abortTransaction;
- (void)addChangeScopes:(id)a0;
- (char)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;

@end
