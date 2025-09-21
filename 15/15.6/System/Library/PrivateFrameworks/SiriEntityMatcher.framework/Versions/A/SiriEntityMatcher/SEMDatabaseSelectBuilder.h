@class SEMSQLCommandJoin, NSArray, SEMSQLCommandOrder, NSNumber;

@interface SEMDatabaseSelectBuilder : SEMDatabaseCommandBuilder {
    SEMSQLCommandJoin *_join;
    SEMSQLCommandOrder *_order;
    NSArray *_columns;
    char _count;
    NSNumber *_limit;
    NSNumber *_offset;
}

- (void).cxx_destruct;
- (void)setLimit:(id)a0;
- (void)setOffset:(id)a0;
- (void)setCount:(char)a0;
- (id)build;
- (void)setColumns:(id)a0;
- (id)initWithTableName:(id)a0;
- (void)setColumns:(id)a0 withTablePrefixes:(id)a1;
- (void)setCommandCriterion:(id)a0;
- (void)setCommandOrder:(id)a0;
- (void)setJoinWithTable:(id)a0 joinCriterion:(id)a1;

@end
