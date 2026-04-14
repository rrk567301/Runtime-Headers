@interface PETEventFreeValuedProperty : PETEventProperty

- (id)description;
- (id)initWithName:(id)a0;
- (id)possibleValues;
- (unsigned long long)cardinality;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;

@end
