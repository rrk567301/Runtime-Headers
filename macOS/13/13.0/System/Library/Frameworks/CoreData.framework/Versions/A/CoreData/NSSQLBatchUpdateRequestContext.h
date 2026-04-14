@class NSBatchUpdateRequest, NSSQLiteStatement, NSFetchRequest;

@interface NSSQLBatchUpdateRequestContext : NSSQLBatchOperationRequestContext {
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSBatchUpdateRequest *request;

- (void)dealloc;
- (BOOL)isWritingRequest;
- (void)executePrologue;
- (BOOL)executeRequestCore:(id *)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (id)createFetchRequestContextForObjectsToUpdate;

@end
