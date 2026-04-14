@class CCSQLCommandOrder, NSArray, NSNumber;

@interface CCDatabaseSelectBuilder : CCDatabaseCommandBuilder {
    CCSQLCommandOrder *_order;
    NSArray *_columns;
    BOOL _count;
    BOOL _distinct;
    NSNumber *_limit;
    NSNumber *_offset;
    NSArray *_ctes;
    NSArray *_unionSelects;
    BOOL _unionAll;
    NSArray *_joinTables;
}

- (void)setDistinct:(BOOL)a0;
- (void)setCount:(BOOL)a0;
- (void)setOffset:(id)a0;
- (void)setLimit:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (void)setColumns:(id)a0;
- (id)initWithTableName:(id)a0;
- (void)setColumns:(id)a0 withTablePrefixes:(id)a1;
- (void)setCommandCriterion:(id)a0;
- (void)setCommandOrder:(id)a0;
- (void)setCommonTableExpressions:(id)a0;
- (void)setJoinTables:(id)a0;
- (void)setUnionWithSelects:(id)a0 unionAll:(BOOL)a1;

@end
