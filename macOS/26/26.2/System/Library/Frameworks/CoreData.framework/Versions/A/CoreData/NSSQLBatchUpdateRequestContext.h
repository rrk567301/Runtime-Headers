@class NSBatchUpdateRequest, NSSQLiteStatement, NSFetchRequest;

@interface NSSQLBatchUpdateRequestContext : NSSQLBatchOperationRequestContext {
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSBatchUpdateRequest *request;

- (id)createFetchRequestContextForObjectsToUpdate;
- (void)executePrologue;
- (void)clearSQLiteStatements;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)isWritingRequest;
- (void)dealloc;

@end
