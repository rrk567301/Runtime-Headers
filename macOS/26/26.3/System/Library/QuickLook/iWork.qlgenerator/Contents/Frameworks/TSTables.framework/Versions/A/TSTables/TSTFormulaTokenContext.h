@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject

@property (readonly, nonatomic) TSTExpressionNode *expressionNode;
@property (readonly, nonatomic) unsigned long long parenNestingLevel;
@property (readonly, nonatomic) unsigned long long argumentIndex;

+ (id)tokenContextWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1 argumentIndex:(unsigned long long)a2;
+ (id)tokenContextWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1;
- (id)initWithExpressionNode:(id)a0 parenNestingLevel:(unsigned long long)a1 argumentIndex:(unsigned long long)a2;

@end
