@class NSString, NSArray, NSIndexSet;

@interface OITSUMutableCustomFormatData : OITSUCustomFormatData

@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSArray *interstitialStrings;
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic) double scaleFactor;
@property (nonatomic) int fractionAccuracy;
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

+ (id)customFormatData;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
