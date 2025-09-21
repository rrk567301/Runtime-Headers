@class NSString;

@interface IPDateFormat : IPFormat

@property (readonly, nonatomic) NSString *option;
@property (readonly, nonatomic) NSString *title;

+ (void)setDateFormat:(id)a0;
+ (id)availableDateFormats;
+ (id)currentDateFormat;
+ (id)dateFormatFromFormatter:(id)a0 style:(unsigned long long)a1;
+ (char)dateFormatIsAllNumeric:(id)a0;
+ (id)dateFormatterFromLanguage;
+ (id)dateFormatterFromLocale;
+ (double)sampleTime;

- (void).cxx_destruct;
- (id)initWithOption:(id)a0 title:(id)a1;

@end
