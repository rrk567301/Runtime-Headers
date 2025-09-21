@interface _HKCFGTerminal : _HKCFGExpression

+ (id)terminalMatchingCharacterInSet:(id)a0;
+ (id)_terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)_terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingAnyDouble;
+ (id)terminalMatchingAnyInteger;
+ (id)terminalMatchingCharacterInString:(id)a0;
+ (id)terminalMatchingDoubleWithCondition:(id /* block */)a0;
+ (id)terminalMatchingIntegerWithCondition:(id /* block */)a0;
+ (id)terminalMatchingSequenceOfCharactersInSet:(id)a0;
+ (id)terminalMatchingString:(id)a0;
+ (id)terminalMatchingString:(id)a0 caseSensitive:(char)a1;

- (id)_label;
- (id)characterSet;
- (unsigned long long)_minimumLength;
- (char)_scanValue:(id *)a0 withScanner:(id)a1;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;

@end
