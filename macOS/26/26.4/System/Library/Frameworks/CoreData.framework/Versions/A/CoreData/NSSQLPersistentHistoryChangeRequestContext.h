@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (void)executePrologue;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (id)fetchRequestContextForChanges;
- (id)createDeleteTransactionsRequestContext;
- (id)createCountRequestContextForChanges;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)isWritingRequest;
- (void)dealloc;

@end
