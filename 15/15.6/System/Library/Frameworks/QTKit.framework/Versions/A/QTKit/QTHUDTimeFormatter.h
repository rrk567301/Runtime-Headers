@interface QTHUDTimeFormatter : NSFormatter {
    struct QTHUDTimeFormatterAuxStorage { struct __QTTimeFormatter *x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; long long x12; long long x13; long long x14; long long x15; unsigned char x16 : 2; unsigned char x17 : 2; unsigned char x18 : 2; unsigned char x19 : 4; unsigned char x20 : 4; } *_aux;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)decimalSeparator;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)locale;
- (void)setLocale:(id)a0;
- (id)minimum;
- (id)maximum;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)editingStringForObjectValue:(id)a0;
- (char)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (char)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (unsigned long long)maximumFractionDigits;
- (unsigned long long)maximumIntegerDigits;
- (unsigned long long)minimumFractionDigits;
- (unsigned long long)minimumIntegerDigits;
- (id)negativePrefix;
- (id)negativeSuffix;
- (id)positivePrefix;
- (id)positiveSuffix;
- (void)setDecimalSeparator:(id)a0;
- (void)setMaximum:(id)a0;
- (void)setMaximumFractionDigits:(unsigned long long)a0;
- (void)setMaximumIntegerDigits:(unsigned long long)a0;
- (void)setMinimum:(id)a0;
- (void)setMinimumFractionDigits:(unsigned long long)a0;
- (void)setMinimumIntegerDigits:(unsigned long long)a0;
- (void)setNegativePrefix:(id)a0;
- (void)setNegativeSuffix:(id)a0;
- (void)setPositivePrefix:(id)a0;
- (void)setPositiveSuffix:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (id)stringFromTimeInterval:(double)a0;
- (id)componentSeparator;
- (id)stringFromCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; long long x1; long long x2; })QTTimeFromString:(id)a0;
- (struct __QTTimeFormatter { } *)_QTTimeFormatter;
- (id)nonfiniteSymbol;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeFromString:(id)a0;
- (unsigned long long)componentOrder;
- (id)digitGroupingSeparator;
- (id)optionalComponents;
- (id)requiredComponents;
- (void)setComponentOrder:(unsigned long long)a0;
- (void)setComponentSeparator:(id)a0;
- (void)setDigitGroupingSeparator:(id)a0;
- (void)setNonfiniteSymbol:(id)a0;
- (void)setOptionalComponents:(id)a0;
- (void)setRequiredComponents:(id)a0;
- (void)setShowsSignInAllComponents:(char)a0;
- (void)setUsesDigitGroupingSeparator:(char)a0;
- (char)showsSignInAllComponents;
- (id)stringFromQTTime:(struct { long long x0; long long x1; long long x2; })a0;
- (double)timeIntervalFromString:(id)a0;
- (char)usesDigitGroupingSeparator;

@end
