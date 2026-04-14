@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject

@property (readonly, nonatomic) NSArray *generators;
@property (readonly, nonatomic) BOOL ascending;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToEFSQLOrderByExpressionGenerator:(id)a0;
- (id)initWithGenerators:(id)a0 ascending:(BOOL)a1;
- (id)orderByExpression;

@end
