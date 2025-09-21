@class NSString;

@interface EMNumberFormatter : NSObject {
    struct __CFNumberFormatter { } *_genericFormatter;
    struct __CFNumberFormatter { } *_doubleFormatter;
    struct __CFNumberFormatter { } *_percentFormatter;
    struct __CFNumberFormatter { } *_bigNumberFormatter;
    struct __CFNumberFormatter { } *_currencyFormatter;
    struct __CFDateFormatter { } *_dateFormatter;
    NSString *_excelFormatString;
    NSString *_baseICUFormatString;
    char _isNegativeRed;
    char _hasLocales;
    int _formatType;
}

+ (id)formatterForFormat:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __CFDateFormatter { } *)_dateFormatter;
- (id)formatDate:(id)a0;
- (int)formatType;
- (id)formatPhoneNumber:(double)a0;
- (struct __CFNumberFormatter { } *)_currencyFormatter;
- (id)formatFraction:(double)a0;
- (struct __CFNumberFormatter { } *)_doubleFormatter;
- (id)_icuFormatStringForDateFormat;
- (id)formatCurrency:(double)a0;
- (struct __CFNumberFormatter { } *)_bigNumberFormatter;
- (struct __CFNumberFormatter { } *)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)a0;
- (id)_icuFormatStringForCurrencyFormat;
- (void)_parseExcelFormatString:(id)a0;
- (struct __CFNumberFormatter { } *)_percentFormatter;
- (void)convertGenericNumberFormat:(id)a0;
- (id)convertedGenericNumberFormatWithFormat:(id)a0;
- (id)formatDefault:(double)a0;
- (id)formatDefault:(double)a0 showingNumberOfDigits:(unsigned long long)a1;
- (id)formatDoubleValue:(double)a0;
- (id)formatPercent:(double)a0;
- (id)formatValue:(double)a0 inWorkbook:(id)a1;
- (id)initForGeneralFormatting;
- (id)initWithExcelFormatString:(id)a0;
- (BOOL)isNegativeRed;
- (unsigned long long)optimalNumberOfDigitsForValue:(double)a0;
- (char)useBigNumberFormatterForValue:(double)a0;

@end
