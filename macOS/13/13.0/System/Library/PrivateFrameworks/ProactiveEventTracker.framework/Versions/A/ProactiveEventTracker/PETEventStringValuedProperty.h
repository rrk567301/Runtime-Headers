@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {
    NSSet *_possibleValues;
    BOOL _autoSanitizeValues;
}

- (id)description;
- (void).cxx_destruct;
- (id)possibleValues;
- (unsigned long long)cardinality;
- (BOOL)isValidValue:(id)a0;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)longestValueString;
- (id)initWithName:(id)a0 possibleValues:(id)a1 autoSanitizeValues:(BOOL)a2;

@end
