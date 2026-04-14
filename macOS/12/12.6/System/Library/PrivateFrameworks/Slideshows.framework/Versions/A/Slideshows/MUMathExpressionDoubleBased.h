@interface MUMathExpressionDoubleBased : MUMathExpressionBase {
    void *mInterpreter;
}

+ (double)invalidResult;
+ (double)evaluateString:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (id)stringValue;
- (void)cleanup;
- (double)evaluate;
- (double)valueForVariable:(id)a0;
- (BOOL)isConstant;
- (id)initWithString:(id)a0 error:(id *)a1;
- (void)setVariableValues:(id)a0;
- (void)setValue:(double)a0 forVariable:(id)a1;
- (void)resetAllVariables;
- (void)_resetVariableIndicies;
- (void)replaceVariable:(id)a0 withValue:(double)a1;
- (BOOL)isValueIllegal:(double)a0;

@end
