@class NSString;

@interface IPDateFormat : IPFormat

@property (readonly, nonatomic) NSString *option;
@property (readonly, nonatomic) NSString *title;

+ (void)setDateFormat:(id)a0;
+ (double)sampleTime;
+ (id)dateFormatterFromLocale;
+ (id)dateFormatterFromLanguage;
+ (id)dateFormatFromFormatter:(id)a0 style:(unsigned long long)a1;
+ (id)availableDateFormats;
+ (id)currentDateFormat;
+ (BOOL)dateFormatIsAllNumeric:(id)a0;

- (void).cxx_destruct;
- (id)initWithOption:(id)a0 title:(id)a1;

@end
