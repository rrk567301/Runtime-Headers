@interface NSSQLBatchInsertRequestContext : NSSQLBatchOperationRequestContext

- (BOOL)isWritingRequest;
- (BOOL)executeRequestCore:(id *)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;

@end
