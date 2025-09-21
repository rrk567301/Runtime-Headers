@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {
    NSSet *_possibleValues;
    char _autoSanitizeValues;
}

- (id)description;
- (void).cxx_destruct;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)cardinality;
- (id)initWithName:(id)a0 possibleValues:(id)a1 autoSanitizeValues:(char)a2;
- (char)isValidValue:(id)a0;
- (id)longestValueString;

@end
