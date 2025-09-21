@class NSString, TSULocale;

@interface TSUDecimalFormatter : NSObject {
    struct TSUDecimalFormatterCore { void /* function */ **x0; struct __CFNumberFormatter *x1; id x2; id x3; void **x4; long long x5; id x6; id x7; id x8; id x9; id x10; char x11; char x12; char x13; } *_formatter;
}

@property (retain, nonatomic) NSString *format;
@property (nonatomic) char isLenient;
@property (nonatomic) int minFractionDigits;
@property (nonatomic) int maxFractionDigits;
@property (nonatomic) int minIntegerDigits;
@property (nonatomic) int maxIntegerDigits;
@property (nonatomic) unsigned long long roundingMode;
@property (retain, nonatomic) NSString *minusSign;
@property (retain, nonatomic) NSString *exponentSymbol;
@property (nonatomic) char useGroupingSeparator;
@property (nonatomic) int groupingSize;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSString *currencySymbol;
@property (readonly, nonatomic) TSULocale *locale;

+ (id)createHarmonizedDecimalFormatterOfStyle:(long long)a0 locale:(id)a1 formattingSymbols:(id)a2;

- (void)dealloc;
- (struct TSUDecimalFormatterCore { void /* function */ **x0; struct __CFNumberFormatter *x1; id x2; id x3; void **x4; long long x5; id x6; id x7; id x8; id x9; id x10; char x11; char x12; char x13; } *)formatter;
- (id)initWithLocale:(id)a0 style:(long long)a1;
- (id)copyFormatterPropertyForKey:(struct __CFString { } *)a0;
- (id)createStringWithValue:(double)a0;
- (char)getValueFromString:(id)a0 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 valuePtr:(double *)a2;
- (id)createStringWithNumber:(id)a0;
- (void)setMinFractionDigits:(int)a0 maxFractionDigits:(int)a1;
- (id)createStringWithDecimal:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0;
- (void)harmonizedSetCurrency:(id)a0 locale:(id)a1;

@end
