@class NSString, NSCalendar, NSDateFormatter, NSDate, NSLocale;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText {
    NSDateFormatter *_displayDateFormatter;
}

@property (nonatomic) char showsDay;
@property (nonatomic) char showsMonth;
@property (nonatomic) char showsYear;
@property (copy, nonatomic) NSString *submissionFormat;
@property (copy, nonatomic) NSDate *defaultDate;
@property (copy, nonatomic) NSDate *currentValue;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSLocale *locale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;
- (unsigned long long)fieldType;
- (id)displayString;
- (void)updateWithConfiguration:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)_commonUpdate;
- (id)_defaultValueAsDateForCurrentLocale;
- (id)_submissionStringForValue:(id)a0;
- (char)submissionStringMeetsAllRequirements;

@end
