@class NSString, NSLocale;

@interface IPNumberFormat : NSObject

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *formattedNumber;

+ (void)setFormat:(id)a0;
+ (id)availableFormats;
+ (id)currentFormat;
+ (id)formatterInLocale:(id)a0;
+ (id)formattedNumberInLocale:(id)a0;
+ (id)formatterUsingSeparatorsFromLocale:(id)a0;
+ (id)formattedNumberUsingSeparatorsFromLocale:(id)a0;
+ (id)candidateLocales;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 formattedNumber:(id)a1;

@end
