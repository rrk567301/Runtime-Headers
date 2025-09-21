@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {
    NSSet *_possibleValues;
    BOOL _autoSanitizeValues;
}

- (id)initWithName:(id)a0 possibleValues:(id)a1 autoSanitizeValues:(BOOL)a2;
- (unsigned long long)cardinality;
- (id)description;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)longestValueString;
- (BOOL)isValidValue:(id)a0;
- (void).cxx_destruct;
- (id)possibleValues;

@end
