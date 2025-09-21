@class NSString, NSNumberFormatter, NSLocale;

@interface AVTimeFormatterInternal : NSObject {
    long long style;
    double formatTemplate;
    char isFullWidth;
    NSLocale *locale;
    char isRightToLeft;
    NSString *cachedDateFormatterFormat;
    NSString *cachedDateFormatterTemplate;
    NSNumberFormatter *numberFormatterWithOneMinimumIntegerDigits;
    NSNumberFormatter *numberFormatterWithTwoMinimumIntegerDigits;
}

@end
