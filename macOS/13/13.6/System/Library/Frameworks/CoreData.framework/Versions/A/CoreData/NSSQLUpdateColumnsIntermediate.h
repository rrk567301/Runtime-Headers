@class NSArray;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {
    NSArray *_propertiesToUpdate;
    NSArray *_valuesToUpdateTo;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)initWithProperties:(id)a0 values:(id)a1 inScope:(id)a2;
- (BOOL)isUpdateColumnsScoped;

@end
