@class NSString;

@interface TSKCurrencyFormat : TSKFormat <NSCopying> {
    long long _propertiesCacheKey;
}

@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) char showThousandsSeparator;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) unsigned long long currencyCodeIndex;
@property (readonly, nonatomic) char accountingStyle;
@property (readonly, nonatomic) char usePlusSign;

+ (id)defaultCurrencyFormatWithCurrencyCode:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asCurrencyFormat;
- (id)initWithDecimalPlaces:(unsigned long long)a0 negativeStyle:(unsigned char)a1 showSeparator:(char)a2 accountingStyle:(char)a3 currencyCode:(id)a4;
- (id)decimalFormatterForLocale:(id)a0;

@end
