@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject

@property (readonly, nonatomic) NSArray *generators;
@property (readonly, nonatomic) BOOL ascending;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGenerators:(id)a0 ascending:(BOOL)a1;
- (BOOL)isEqualToEFSQLOrderByExpressionGenerator:(id)a0;
- (id)orderByExpression;

@end
