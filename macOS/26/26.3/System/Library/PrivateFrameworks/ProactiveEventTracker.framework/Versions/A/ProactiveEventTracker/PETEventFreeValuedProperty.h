@interface PETEventFreeValuedProperty : PETEventProperty

- (id)description;
- (BOOL)isValidValue:(id)a0;
- (id)initWithName:(id)a0;
- (id)possibleValues;
- (id)longestValueString;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)cardinality;

@end
