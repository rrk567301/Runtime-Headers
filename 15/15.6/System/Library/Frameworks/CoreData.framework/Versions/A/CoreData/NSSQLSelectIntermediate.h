@class NSSQLEntity, NSString, NSArray;

@interface NSSQLSelectIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSString *_entityAlias;
    NSString *_correlationTarget;
    NSArray *_fetchColumns;
    char _useDistinct;
    NSString *_columnAlias;
    char _isCount;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initForCorrelationTarget:(id)a0 alias:(id)a1 fetchColumns:(id)a2 inScope:(id)a3;
- (id)initWithEntity:(id)a0 alias:(id)a1 fetchColumns:(id)a2 inScope:(id)a3;
- (char)isTargetColumnsScoped;
- (char)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)a0 inContext:(id)a1;

@end
