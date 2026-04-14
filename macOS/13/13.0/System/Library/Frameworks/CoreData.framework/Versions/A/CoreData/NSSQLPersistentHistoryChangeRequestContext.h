@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (void)dealloc;
- (BOOL)isWritingRequest;
- (void)executePrologue;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (id)createCountRequestContextForChanges;
- (id)fetchRequestContextForChanges;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (id)createDeleteTransactionsRequestContext;
- (BOOL)executeRequestUsingConnection:(id)a0;

@end
