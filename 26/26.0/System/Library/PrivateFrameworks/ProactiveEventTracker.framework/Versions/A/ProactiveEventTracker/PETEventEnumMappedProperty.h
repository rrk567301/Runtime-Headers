@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;
- (unsigned long long)cardinality;
- (id)description;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)longestValueString;
- (BOOL)isValidValue:(id)a0;
- (void).cxx_destruct;
- (id)possibleValues;

@end
