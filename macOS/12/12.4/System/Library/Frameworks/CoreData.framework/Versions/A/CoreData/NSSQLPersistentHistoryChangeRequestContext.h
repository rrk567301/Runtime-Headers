@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (void)dealloc;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (void)executePrologue;
- (BOOL)isWritingRequest;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (id)createCountRequestContextForChanges;
- (id)fetchRequestContextForChanges;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (id)createDeleteTransactionsRequestContext;

@end
