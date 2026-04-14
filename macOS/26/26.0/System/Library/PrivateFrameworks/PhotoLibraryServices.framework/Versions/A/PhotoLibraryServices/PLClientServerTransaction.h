@class NSString, NSSet, PLPhotoLibraryPathManager, NSMutableArray;

@interface PLClientServerTransaction : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } pdsaLock;
@property (retain, nonatomic) NSMutableArray *pdsaLock_postDelayedSaveActionsReplyBlocks;
@property (copy, nonatomic) NSString *transactionToken;
@property (readonly, nonatomic) NSSet *changeScopes;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

+ (id)_libraryURLFromXPCDictionary:(id)a0;
+ (id)transactionFromUserInfo:(id)a0;
+ (unsigned long long)_readScopeValuesFromFileDescriptor:(int)a0;
+ (id)scopesFromScopeValues:(unsigned long long)a0;
+ (id)_recoveryHistoryFilePathForPathManager:(id)a0;
+ (void)removeTransactionFromUserInfo:(id)a0;
+ (id)descriptionOfTransactionScopes:(id)a0;
+ (id)_scopeValuesByScope;
+ (void)cancelOutstandingTransactionHandlerTimer:(id)a0;
+ (BOOL)_hasExcessiveRecoveryAttemptsForPathManager:(id)a0;
+ (id)_transactionTokenFromXPCDictionary:(id)a0;
+ (id)handleOutstandingTransactionsForPathManager:(id)a0 sqliteErrorHandler:(id /* block */)a1 handler:(id /* block */)a2;
+ (void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)a0 sqliteErrorHandler:(id /* block */)a1;
+ (void)addTransaction:(id)a0 toXPCDictionary:(id)a1;
+ (BOOL)_isOutstandingTransactionAtPath:(id)a0 getScopeValues:(unsigned long long *)a1;
+ (BOOL)_archiveRecoveryHistoryForPathManager:(id)a0 error:(id *)a1;
+ (unsigned long long)scopeValuesFromScopes:(id)a0;
+ (id)_serverTransactionForPathManager:(id)a0 isNew:(BOOL *)a1 identifier:(const char *)a2;
+ (void)_recordRecoveryAttemptForPathManager:(id)a0;
+ (id)beginClientTransactionWithChangeScopes:(id)a0 pathManager:(id)a1 identifier:(const char *)a2;
+ (id)serverTransactionQueue;
+ (void)addTransaction:(id)a0 toUserInfo:(id)a1;
+ (id)_changeScopesFromXPCDictionary:(id)a0;
+ (id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)a0 pathManager:(id)a1 identifier:(const char *)a2;
+ (void)_cleanupAllTransactionsScopesByPath:(id)a0;
+ (id)descriptionOfAllTransactionFilesForPathManager:(id)a0;
+ (id)_allTransactionPathsForPathManager:(id)a0;
+ (id)_filePathForTransactionWithToken:(id)a0 pathManager:(id)a1;
+ (id)_outstandingTransactionScopesByPathForPathManager:(id)a0;
+ (id)beginServerTransactionWithToken:(id)a0 changeScopes:(id)a1 pathManager:(id)a2 identifier:(const char *)a3;

- (void)popChangeScopesBatch;
- (void)addPostDelayedSaveActionsReply:(id /* block */)a0;
- (id)initWithPathManager:(id)a0;
- (void)transferReplyBlocksTo:(id)a0;
- (void)stillAlive;
- (void)addChangeScopes:(id)a0;
- (void)completeTransactionScope:(id)a0;
- (void)abortTransaction;
- (void)completeTransaction;
- (BOOL)isClientTransaction;
- (void)pushChangeScopesBatch;
- (void).cxx_destruct;

@end
