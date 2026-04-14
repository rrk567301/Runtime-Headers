@class NSLocale;

@interface _PFLocalizedDateRangeFormatter : NSObject {
    NSLocale *_locale;
    struct UDateIntervalFormat { } *_dateIntervalFormat;
}

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)stringForDateRangeFrom:(id)a0 to:(id)a1;

@end
