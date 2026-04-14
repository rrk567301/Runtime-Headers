@class NSString, NSSet, PLPhotoLibraryPathManager, NSMutableArray;

@interface PLClientServerTransaction : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } pdsaLock;
@property (retain, nonatomic) NSMutableArray *pdsaLock_postDelayedSaveActionsReplyBlocks;
@property (copy, nonatomic) NSString *transactionToken;
@property (readonly, nonatomic) NSSet *changeScopes;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

+ (id)descriptionOfAllTransactionFilesForPathManager:(id)a0;
+ (BOOL)_archiveRecoveryHistoryForPathManager:(id)a0 error:(id *)a1;
+ (id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)a0 pathManager:(id)a1 identifier:(const char *)a2;
+ (id)scopesFromScopeValues:(unsigned long long)a0;
+ (BOOL)_isOutstandingTransactionAtPath:(id)a0 getScopeValues:(unsigned long long *)a1;
+ (id)_scopeValuesByScope;
+ (void)addTransaction:(id)a0 toXPCDictionary:(id)a1;
+ (unsigned long long)_readScopeValuesFromFileDescriptor:(int)a0;
+ (void)addTransaction:(id)a0 toUserInfo:(id)a1;
+ (id)beginServerTransactionWithToken:(id)a0 changeScopes:(id)a1 pathManager:(id)a2 identifier:(const char *)a3;
+ (void)_recordRecoveryAttemptForPathManager:(id)a0;
+ (void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)a0 sqliteErrorHandler:(id /* block */)a1;
+ (id)handleOutstandingTransactionsForPathManager:(id)a0 sqliteErrorHandler:(id /* block */)a1 handler:(id /* block */)a2;
+ (unsigned long long)scopeValuesFromScopes:(id)a0;
+ (id)_libraryURLFromXPCDictionary:(id)a0;
+ (BOOL)_hasExcessiveRecoveryAttemptsForPathManager:(id)a0;
+ (void)_cleanupAllTransactionsScopesByPath:(id)a0;
+ (id)descriptionOfTransactionScopes:(id)a0;
+ (id)_recoveryHistoryFilePathForPathManager:(id)a0;
+ (id)_transactionTokenFromXPCDictionary:(id)a0;
+ (id)_serverTransactionForPathManager:(id)a0 isNew:(BOOL *)a1 identifier:(const char *)a2;
+ (void)cancelOutstandingTransactionHandlerTimer:(id)a0;
+ (id)transactionFromUserInfo:(id)a0;
+ (id)_outstandingTransactionScopesByPathForPathManager:(id)a0;
+ (id)beginClientTransactionWithChangeScopes:(id)a0 pathManager:(id)a1 identifier:(const char *)a2;
+ (id)_allTransactionPathsForPathManager:(id)a0;
+ (void)removeTransactionFromUserInfo:(id)a0;
+ (id)serverTransactionQueue;
+ (id)_filePathForTransactionWithToken:(id)a0 pathManager:(id)a1;
+ (id)_changeScopesFromXPCDictionary:(id)a0;

- (id)initWithPathManager:(id)a0;
- (void)transferReplyBlocksTo:(id)a0;
- (void)completeTransactionScope:(id)a0;
- (void)stillAlive;
- (BOOL)isClientTransaction;
- (void)pushChangeScopesBatch;
- (void)abortTransaction;
- (void)popChangeScopesBatch;
- (void).cxx_destruct;
- (void)addChangeScopes:(id)a0;
- (void)completeTransaction;
- (void)addPostDelayedSaveActionsReply:(id /* block */)a0;

@end
