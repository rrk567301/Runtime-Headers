@class NSBatchUpdateRequest, NSSQLiteStatement, NSFetchRequest;

@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext {
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSBatchUpdateRequest *request;

- (void)dealloc;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (void)executePrologue;
- (BOOL)isWritingRequest;
- (BOOL)executeRequestCore:(id *)a0;
- (id)createFetchRequestContextForObjectsToUpdate;

@end
