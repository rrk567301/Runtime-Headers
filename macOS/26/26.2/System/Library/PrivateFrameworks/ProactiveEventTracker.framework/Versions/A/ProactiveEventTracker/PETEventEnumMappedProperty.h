@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;
- (unsigned long long)cardinality;
- (id)possibleValues;

@end
