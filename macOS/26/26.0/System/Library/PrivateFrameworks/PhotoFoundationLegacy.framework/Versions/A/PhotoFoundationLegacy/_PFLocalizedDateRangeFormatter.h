@class NSLocale;

@interface _PFLocalizedDateRangeFormatter : NSObject {
    NSLocale *_locale;
    struct UDateIntervalFormat { } *_dateIntervalFormat;
}

- (id)initWithLocale:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)stringForDateRangeFrom:(id)a0 to:(id)a1;

@end
