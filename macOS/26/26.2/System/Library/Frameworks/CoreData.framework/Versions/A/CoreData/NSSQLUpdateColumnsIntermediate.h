@class NSDictionary;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate

@property (retain, nonatomic) NSDictionary *propertiesToUpdate;

- (id)governingAliasForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithPropertiesToUpdate:(id)a0 inScope:(id)a1;
- (BOOL)isUpdateColumnsScoped;
- (void)dealloc;

@end
