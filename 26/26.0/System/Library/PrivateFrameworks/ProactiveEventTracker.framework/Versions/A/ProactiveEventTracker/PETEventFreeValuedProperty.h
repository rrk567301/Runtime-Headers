@interface PETEventFreeValuedProperty : PETEventProperty

- (unsigned long long)cardinality;
- (id)description;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)longestValueString;
- (BOOL)isValidValue:(id)a0;
- (id)initWithName:(id)a0;
- (id)possibleValues;

@end
