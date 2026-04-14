@class NSString;

@interface ABDateFormatter : NSDateFormatter {
    NSString *_fullDateFormatString;
    NSString *_yearlessDateFormatString;
}

+ (BOOL)isDateYearless:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void)awakeFromNib;
- (void)localeChanged:(id)a0;
- (void)ABDateFormatter_commonInit;
- (void)rebuildDateComponents;
- (id)formatStringForComponents:(id)a0;

@end
