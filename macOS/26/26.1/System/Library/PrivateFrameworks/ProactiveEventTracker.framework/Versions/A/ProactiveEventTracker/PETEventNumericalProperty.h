@interface PETEventNumericalProperty : PETEventProperty {
    struct _NSRange { unsigned long long location; unsigned long long length; } _validRange;
    BOOL _clampValues;
}

- (id)initWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 clampValues:(BOOL)a2;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (BOOL)isValidValue:(id)a0;
- (id)longestValueString;
- (id)description;
- (unsigned long long)cardinality;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;

@end
