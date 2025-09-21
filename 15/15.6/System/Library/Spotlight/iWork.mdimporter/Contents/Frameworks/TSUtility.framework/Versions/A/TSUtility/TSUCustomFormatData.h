@class NSString, NSArray, NSIndexSet;

@interface TSUCustomFormatData : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSArray *interstitialStrings;
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic) double scaleFactor;
@property (nonatomic) char fractionAccuracy;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) char showThousandsSeparator;
@property (nonatomic) char useAccountingStyle;
@property (nonatomic) char requiresFractionReplacement;
@property (nonatomic) char isConditional;
@property (nonatomic) char formatContainsIntegerToken;
@property (nonatomic) char isComplexFormat;
@property (nonatomic) long long formatCacheKey;
@property (readonly, nonatomic) char isCurrency;

+ (id)customFormatData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCustomFormatData:(id)a0;
- (void)p_copySelfTo:(id)a0;

@end
