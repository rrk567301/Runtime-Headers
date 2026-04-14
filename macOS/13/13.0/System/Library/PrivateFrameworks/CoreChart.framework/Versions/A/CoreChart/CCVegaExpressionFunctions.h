@class NSCalendar, NSDictionary, NSMutableDictionary, NSLocale;

@interface CCVegaExpressionFunctions : NSObject {
    NSMutableDictionary *_cache;
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSDictionary *_fontOptions;
}

@property (retain) NSLocale *locale;
@property (retain) NSCalendar *calendar;
@property (retain) NSDictionary *fontOptions;

+ (id)functionNames;

- (id)init;
- (void).cxx_destruct;
- (void)registerFunctionsToClient:(id)a0;
- (id)keyForKind:(id)a0 options:(id)a1;
- (id)makeReturnValue:(id)a0;
- (id)numberFormatterFromOptions:(id)a0;
- (id /* block */)nativeNumberFormat;
- (unsigned long long)calendarUnitFromString:(id)a0;
- (id)dateComponentsFormatterFromOptions:(id)a0;
- (id /* block */)nativeDateComponentsFormat;
- (unsigned long long)dateFormatterStyleFromString:(id)a0;
- (id)dateFormatterFromOptions:(id)a0;
- (id /* block */)nativeDateFormat;
- (id)fontFromJSFontDesc:(id)a0 options:(id)a1;
- (id /* block */)nativeFontMetrics;
- (id /* block */)nativeTextMetrics;

@end
