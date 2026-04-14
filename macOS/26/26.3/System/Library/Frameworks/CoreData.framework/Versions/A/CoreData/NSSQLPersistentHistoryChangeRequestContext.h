@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (id)fetchRequestContextForChanges;
- (id)createCountRequestContextForChanges;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (id)createDeleteTransactionsRequestContext;
- (void)dealloc;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (BOOL)isWritingRequest;
- (void)executePrologue;

@end
