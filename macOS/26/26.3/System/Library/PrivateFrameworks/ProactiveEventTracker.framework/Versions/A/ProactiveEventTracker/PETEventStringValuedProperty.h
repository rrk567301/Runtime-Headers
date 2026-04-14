@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty {
    NSSet *_possibleValues;
    BOOL _autoSanitizeValues;
}

- (id)description;
- (BOOL)isValidValue:(id)a0;
- (id)initWithName:(id)a0 possibleValues:(id)a1 autoSanitizeValues:(BOOL)a2;
- (void).cxx_destruct;
- (id)possibleValues;
- (id)longestValueString;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)cardinality;

@end
