@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (id)createDeleteTransactionsRequestContext;
- (void)executePrologue;
- (id)fetchRequestContextForChanges;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (id)createCountRequestContextForChanges;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (BOOL)isWritingRequest;
- (void)dealloc;

@end
