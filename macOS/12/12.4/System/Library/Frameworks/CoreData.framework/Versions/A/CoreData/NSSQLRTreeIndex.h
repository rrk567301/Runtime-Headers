@class NSString;

@interface NSSQLRTreeIndex : NSSQLIndex {
    NSString *_tableName;
}

- (void)dealloc;
- (id)initForIndexDescription:(id)a0 sqlEntity:(id)a1;
- (id)generateStatementsForStore:(id)a0;
- (id)dropStatementsForStore:(id)a0;
- (id)bulkUpdateStatementsForStore:(id)a0;

@end
