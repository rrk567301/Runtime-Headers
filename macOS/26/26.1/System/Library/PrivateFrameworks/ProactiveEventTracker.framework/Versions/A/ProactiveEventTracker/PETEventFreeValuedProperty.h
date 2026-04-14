@interface PETEventFreeValuedProperty : PETEventProperty

- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;
- (id)description;
- (unsigned long long)cardinality;
- (id)possibleValues;
- (id)initWithName:(id)a0;

@end
