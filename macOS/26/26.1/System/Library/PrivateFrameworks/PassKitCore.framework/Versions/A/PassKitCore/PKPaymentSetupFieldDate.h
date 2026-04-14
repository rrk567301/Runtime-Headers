@class NSString, NSCalendar, NSDateFormatter, NSDate, NSLocale;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText {
    NSDateFormatter *_displayDateFormatter;
}

@property (nonatomic) BOOL showsDay;
@property (nonatomic) BOOL showsMonth;
@property (nonatomic) BOOL showsYear;
@property (copy, nonatomic) NSString *submissionFormat;
@property (copy, nonatomic) NSDate *defaultDate;
@property (copy, nonatomic) NSDate *currentValue;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSLocale *locale;

- (void)setCurrentValue:(id)a0;
- (void)updateWithConfiguration:(id)a0;
- (id)displayString;
- (id)currentValue;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)fieldType;
- (void)_commonUpdate;
- (id)_defaultValueAsDateForCurrentLocale;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;

@end
