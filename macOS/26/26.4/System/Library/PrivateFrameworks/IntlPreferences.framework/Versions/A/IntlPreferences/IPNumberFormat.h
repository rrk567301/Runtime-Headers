@class NSString;

@interface IPNumberFormat : NSObject

@property (readonly, nonatomic) NSString *decimalSeparator;
@property (readonly, nonatomic) NSString *groupingSeparator;
@property (readonly, nonatomic) NSString *formattedNumber;

+ (void)setFormat:(id)a0;
+ (id)availableFormats;
+ (id)currentFormat;

- (BOOL)isEqual:(id)a0;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDecimalSeparator:(id)a0 groupingSeparator:(id)a1;

@end
