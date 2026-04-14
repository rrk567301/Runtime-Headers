@class NSArray, NSSet;

@interface EFSQLSelectExpressionGenerator : NSObject

@property (readonly, nonatomic) NSArray *columnExpressionGenerators;
@property (readonly, nonatomic) NSSet *tableExpressionGenerators;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)columnAliases;
- (id)initExpressionGeneratorWithColumns:(id)a0 tables:(id)a1;
- (BOOL)isEqualToSelectExpressionGenerator:(id)a0;
- (id)selectExpression;

@end
