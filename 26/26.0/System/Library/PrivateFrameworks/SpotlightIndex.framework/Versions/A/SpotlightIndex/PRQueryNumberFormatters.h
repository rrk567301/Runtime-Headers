@class NSNumberFormatter, NSLocale;

@interface PRQueryNumberFormatters : NSObject {
    NSLocale *_locale;
    NSNumberFormatter *_numberFormatter;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_currencyDecimalFormatter;
}

- (id)initWithLocale:(id)a0;
- (void)dealloc;

@end
