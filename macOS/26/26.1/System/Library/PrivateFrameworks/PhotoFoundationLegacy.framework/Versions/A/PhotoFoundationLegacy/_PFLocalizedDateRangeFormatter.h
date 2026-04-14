@class NSLocale;

@interface _PFLocalizedDateRangeFormatter : NSObject {
    NSLocale *_locale;
    struct UDateIntervalFormat { } *_dateIntervalFormat;
}

- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)stringForDateRangeFrom:(id)a0 to:(id)a1;

@end
