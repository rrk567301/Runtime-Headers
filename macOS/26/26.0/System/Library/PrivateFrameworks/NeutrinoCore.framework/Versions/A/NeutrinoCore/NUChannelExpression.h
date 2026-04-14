@class NSArray, NSString;

@interface NUChannelExpression : NSObject

@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, nonatomic) NSString *compactDescription;
@property (readonly, nonatomic) long long type;

+ (id)isNil:(id)a0;
+ (id)max:(id)a0;
+ (id)min:(id)a0;
+ (id)falseExpression;
+ (id)trueExpression;
+ (id)not:(id)a0;
+ (id)constantExpression:(id)a0;
+ (id)if:(id)a0 then:(id)a1 else:(id)a2;
+ (id)isNotNil:(id)a0;
+ (id)negative:(id)a0;
+ (id)nullExpression;
+ (id)rectWithX:(id)a0 y:(id)a1 width:(id)a2 height:(id)a3;
+ (id)staticExpression:(id)a0;

- (id)lessThan:(id)a0;
- (id)debugDescription;
- (id)init;
- (id)plus:(id)a0;
- (id)inputPorts;
- (id)description;
- (id)greaterThan:(id)a0;
- (id)minus:(id)a0;
- (void).cxx_destruct;
- (id)or:(id)a0;
- (id)and:(id)a0;
- (id)divide:(id)a0;
- (id)evaluateWithArgumentData:(id)a0 error:(out id *)a1;
- (BOOL)isCompatibleWithExpressionType:(long long)a0;
- (id)equal:(id)a0;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)greaterThanOrEqual:(id)a0;
- (id)initWithExpressionType:(long long)a0 arguments:(id)a1;
- (id)lessThanOrEqual:(id)a0;
- (id)multiply:(id)a0;
- (id)notEqual:(id)a0;

@end
