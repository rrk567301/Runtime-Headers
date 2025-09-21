@class NSString, TSULocale;

@interface TSUDateFormatter_NSFormatter : NSFormatter

@property (retain, nonatomic) NSString *preferredFormat;
@property (nonatomic) char isDateOnly;
@property (nonatomic) char isTimeOnly;
@property (retain, nonatomic) TSULocale *locale;

- (id)init;
- (void).cxx_destruct;
- (char)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringForObjectValue:(id)a0;

@end
