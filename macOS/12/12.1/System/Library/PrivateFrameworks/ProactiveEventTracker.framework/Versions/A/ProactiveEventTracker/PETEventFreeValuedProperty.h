@interface PETEventFreeValuedProperty : PETEventProperty

- (id)description;
- (id)initWithName:(id)a0;
- (id)possibleValues;
- (unsigned long long)cardinality;
- (id)longestValueString;
- (BOOL)isValidValue:(id)a0;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;

@end
