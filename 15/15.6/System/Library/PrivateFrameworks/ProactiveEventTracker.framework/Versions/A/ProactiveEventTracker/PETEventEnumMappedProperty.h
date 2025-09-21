@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
    NSDictionary *_enumMap;
    char _autoSanitizeValues;
}

- (id)description;
- (void).cxx_destruct;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (unsigned long long)cardinality;
- (id)initWithName:(id)a0 enumMapping:(id)a1 autoSanitizeValues:(char)a2;
- (char)isValidValue:(id)a0;
- (id)longestValueString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;

@end
