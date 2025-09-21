@class NSBatchDeleteRequest, NSArray, NSFetchRequest, NSSQLFetchRequestContext;

@interface NSSQLBatchDeleteRequestContext : NSSQLBatchOperationRequestContext {
    NSFetchRequest *_fetchRequestForObjectsToDelete;
    NSArray *_deleteStatements;
    NSArray *_deletedObjectIDs;
    NSSQLFetchRequestContext *_fetchContext;
    NSArray *_externalDataReferenceTriggerStatements;
    NSArray *_externalDataReferencesToDelete;
    NSArray *_fileBackedFuturesToDelete;
}

@property (readonly, nonatomic) NSBatchDeleteRequest *request;

- (void)dealloc;
- (void)executePrologue;
- (void)clearSQLiteStatements;
- (char)executeRequestCore:(id *)a0;
- (char)isWritingRequest;

@end
