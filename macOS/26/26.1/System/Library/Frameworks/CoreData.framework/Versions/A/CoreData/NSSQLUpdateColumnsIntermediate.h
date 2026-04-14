@class NSDictionary;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate

@property (retain, nonatomic) NSDictionary *propertiesToUpdate;

- (id)governingAliasForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (id)initWithPropertiesToUpdate:(id)a0 inScope:(id)a1;
- (BOOL)isUpdateColumnsScoped;

@end
