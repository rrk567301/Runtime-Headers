@interface PETEventFreeValuedProperty : PETEventProperty

- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (unsigned long long)cardinality;
- (id)possibleValues;

@end
