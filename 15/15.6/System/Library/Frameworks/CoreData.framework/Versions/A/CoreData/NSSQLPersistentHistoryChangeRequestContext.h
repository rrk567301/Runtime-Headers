@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) char shouldUseBatches;

- (void)dealloc;
- (void)executePrologue;
- (id)createCountRequestContextForChanges;
- (id)createDeleteTransactionsRequestContext;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (char)executeRequestUsingConnection:(id)a0;
- (id)fetchRequestContextForChanges;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (char)isWritingRequest;

@end
