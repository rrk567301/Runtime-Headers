@class NSNumberFormatter, NSLocale;

@interface SRQueryNumberFormatters : NSObject {
    NSLocale *_locale;
    NSNumberFormatter *_numberFormatter;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_currencyDecimalFormatter;
}

- (void)dealloc;
- (id)initWithLocale:(id)a0;

@end
