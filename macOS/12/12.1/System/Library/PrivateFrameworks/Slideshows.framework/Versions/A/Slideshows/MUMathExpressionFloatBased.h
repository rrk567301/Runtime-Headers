@interface MUMathExpressionFloatBased : MUMathExpressionBase {
    void *mInterpreter;
}

+ (float)invalidResult;
+ (float)evaluateString:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (id)stringValue;
- (void)cleanup;
- (float)evaluate;
- (float)valueForVariable:(id)a0;
- (BOOL)isConstant;
- (id)initWithString:(id)a0 error:(id *)a1;
- (void)setVariableValues:(id)a0;
- (void)setValue:(float)a0 forVariable:(id)a1;
- (void)resetAllVariables;
- (void)_resetVariableIndicies;
- (void)replaceVariable:(id)a0 withValue:(float)a1;
- (BOOL)isValueIllegal:(float)a0;

@end
