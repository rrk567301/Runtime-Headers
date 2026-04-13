@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (id)description;
- (void).cxx_destruct;
- (id)possibleValues;
- (unsigned long long)cardinality;
- (id)longestValueString;
- (BOOL)isValidValue:(id)a0;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;

@end
