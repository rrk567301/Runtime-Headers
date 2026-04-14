@interface _HKCFGTerminal : _HKCFGExpression

+ (id)terminalMatchingCharacterInString:(id)a0;
+ (id)_terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingString:(id)a0;
+ (id)terminalMatchingAnyDouble;
+ (id)terminalMatchingString:(id)a0 caseSensitive:(BOOL)a1;
+ (id)terminalMatchingCharacterInSet:(id)a0;
+ (id)_terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingAnyInteger;
+ (id)terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)terminalMatchingSequenceOfCharactersInSet:(id)a0;

- (unsigned long long)_minimumLength;
- (id)characterSet;
- (BOOL)_scanValue:(id *)a0 withScanner:(id)a1;
- (id)_label;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;

@end
