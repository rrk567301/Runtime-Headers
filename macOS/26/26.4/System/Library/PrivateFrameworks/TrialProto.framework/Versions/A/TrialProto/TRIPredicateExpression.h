@class NSMutableArray;

@interface TRIPredicateExpression : TRIPBMessage

@property (nonatomic) int operator_p;
@property (nonatomic) BOOL hasOperator_p;
@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) unsigned long long predicateArray_Count;
@property (retain, nonatomic) NSMutableArray *expressionArray;
@property (readonly, nonatomic) unsigned long long expressionArray_Count;

+ (id)descriptor;

@end
