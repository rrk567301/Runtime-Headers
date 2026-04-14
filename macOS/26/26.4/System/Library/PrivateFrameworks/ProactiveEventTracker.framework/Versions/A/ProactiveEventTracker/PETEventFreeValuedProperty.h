@interface PETEventFreeValuedProperty : PETEventProperty

- (unsigned long long)cardinality;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (id)longestValueString;
- (id)possibleValues;

@end
