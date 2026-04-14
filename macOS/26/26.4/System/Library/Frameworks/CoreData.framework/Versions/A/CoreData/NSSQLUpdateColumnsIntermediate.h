@class NSDictionary;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate

@property (retain, nonatomic) NSDictionary *propertiesToUpdate;

- (BOOL)isUpdateColumnsScoped;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithPropertiesToUpdate:(id)a0 inScope:(id)a1;
- (void)dealloc;
- (id)governingAliasForKeypathExpression:(id)a0;

@end
