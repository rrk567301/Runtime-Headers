@interface PETEventNumericalProperty : PETEventProperty {
    struct _NSRange { unsigned long long location; unsigned long long length; } _validRange;
    BOOL _clampValues;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (unsigned long long)cardinality;
- (id)description;
- (id)_loggingKeyStringRepresentationForValue:(id)a0;
- (id)longestValueString;
- (BOOL)isValidValue:(id)a0;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)a0;
- (id)initWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 clampValues:(BOOL)a2;

@end
