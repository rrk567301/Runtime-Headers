@class NSISEngine, slab;

@interface NSISLinearExpression : NSObject <NSFastEnumeration> {
    NSISEngine *engine;
    struct { unsigned short inline_capacity; unsigned int var_count; double constant; union { struct { slab *stored_extern_marker; struct *x0; unsigned long long capacity; } extern_data; struct { unsigned long long aligner; } inline_slab; unsigned char padding[48]; } data; } linExp;
}

@property double constant;
@property (readonly) NSISEngine *engine;

+ (id)acquireFromPoolForUseCase:(long long)a0;
+ (id)newExpressionWithCapacity:(unsigned long long)a0 engine:(id)a1;
+ (void)initialize;
+ (id)newExpressionWithCapacity:(unsigned long long)a0;
+ (id)acquireFromPoolForUseCase:(long long)a0 engine:(id)a1;

- (BOOL)isConstant;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVariable:(id)a0 coefficient:(double)a1 processVariableNewToReceiver:(id /* block */)a2 processVariableDroppedFromReceiver:(id /* block */)a3;
- (BOOL)enumerateVariablesAndCoefficientsUntil:(id /* block */)a0;
- (void)addExpression:(id)a0 times:(double)a1;
- (void)removeVariable:(id)a0;
- (void)verifyInternalIntegrity;
- (unsigned long long)variableCount;
- (void)setCoefficient:(double)a0 forVariable:(id)a1;
- (void)replaceVariable:(id)a0 withExpression:(id)a1 processVariableNewToReceiver:(id /* block */)a2 processVariableDroppedFromReceiver:(id /* block */)a3;
- (void)addVariable:(id)a0 coefficient:(double)a1;
- (id)init;
- (double)incrementConstant:(double)a0;
- (id)copyContentsAndReturnToPool;
- (void)returnToPool;
- (void)replaceVariable:(id)a0 withVariablePlusDelta:(double)a1 timesVariable:(id)a2 processVariableNewToReceiver:(id /* block */)a3 processVariableDroppedFromReceiver:(id /* block */)a4;
- (id)description;
- (id)variablesArray;
- (void)enumerateVariables:(id /* block */)a0;
- (void)replaceVariable:(id)a0 withVariable:(id)a1 coefficient:(double)a2;
- (void)scaleBy:(double)a0;
- (id)initWithEngine:(id)a0;
- (double)coefficientForVariable:(id)a0;
- (void)enumerateVariablesAndCoefficients:(id /* block */)a0;
- (void)replaceVariable:(id)a0 withVariablePlusDelta:(double)a1;
- (unsigned long long)hash;
- (void)addExpression:(id)a0 times:(double)a1 processVariableNewToReceiver:(id /* block */)a2 processVariableDroppedFromReceiver:(id /* block */)a3;
- (BOOL)isEqual:(id)a0;

@end
