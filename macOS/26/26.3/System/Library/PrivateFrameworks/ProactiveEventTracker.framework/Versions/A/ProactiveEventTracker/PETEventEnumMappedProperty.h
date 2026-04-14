@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (id)description;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(BOOL)a2;
- (BOOL)isValidValue:(id)a0;
- (void).cxx_destruct;
- (id)possibleValues;
- (id)longestValueString;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)cardinality;

@end
