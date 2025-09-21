@interface NSSQLBatchInsertRequestContext : NSSQLBatchOperationRequestContext

- (char)executeRequestCore:(id *)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (char)isWritingRequest;

@end
