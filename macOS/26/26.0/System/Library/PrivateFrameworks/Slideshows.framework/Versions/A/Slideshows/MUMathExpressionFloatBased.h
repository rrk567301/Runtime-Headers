@interface MUMathExpressionFloatBased : MUMathExpressionBase {
    void *mInterpreter;
}

+ (float)invalidResult;
+ (float)evaluateString:(id)a0 error:(id *)a1;

- (BOOL)isConstant;
- (void)cleanup;
- (void)dealloc;
- (id)stringValue;
- (id)init;
- (float)evaluate;
- (float)valueForVariable:(id)a0;
- (id)initWithString:(id)a0 error:(id *)a1;
- (BOOL)isValueIllegal:(float)a0;
- (void)_resetVariableIndicies;
- (void)replaceVariable:(id)a0 withValue:(float)a1;
- (void)resetAllVariables;
- (void)setValue:(float)a0 forVariable:(id)a1;
- (void)setVariableValues:(id)a0;

@end
