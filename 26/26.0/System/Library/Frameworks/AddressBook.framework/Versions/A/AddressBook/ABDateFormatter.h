@class NSString;

@interface ABDateFormatter : NSDateFormatter {
    NSString *_fullDateFormatString;
    NSString *_yearlessDateFormatString;
}

+ (BOOL)isDateYearless:(id)a0;

- (id)stringForObjectValue:(id)a0;
- (void)dealloc;
- (void)localeChanged:(id)a0;
- (id)init;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)ABDateFormatter_commonInit;
- (id)formatStringForComponents:(id)a0;
- (void)rebuildDateComponents;

@end
