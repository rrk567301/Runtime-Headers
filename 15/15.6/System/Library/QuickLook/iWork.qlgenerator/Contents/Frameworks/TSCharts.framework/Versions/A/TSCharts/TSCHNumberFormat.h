@class NSString, TSKFormat, NSUUID;

@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport>

@property (class, readonly, nonatomic) unsigned int defaultDecimalPlaces;
@property (class, readonly, nonatomic) char defaultFractionAccuracy;
@property (class, readonly, nonatomic) unsigned char defaultNegativeNumberStyle;
@property (class, readonly, nonatomic) char defaultShowThousandsSeparator;
@property (class, readonly, nonatomic) unsigned int defaultBase;
@property (class, readonly, nonatomic) unsigned int defaultBasePlaces;
@property (class, readonly, nonatomic) char defaultBaseUseMinusSign;

@property (copy, nonatomic) TSKFormat *format;
@property (copy, nonatomic) NSString *prefixString;
@property (copy, nonatomic) NSString *suffixString;
@property (readonly, nonatomic) unsigned int decimalPlaces;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) char useAccountingStyle;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) char showThousandsSeparator;
@property (readonly, nonatomic) char fractionAccuracy;
@property (readonly, nonatomic) unsigned int base;
@property (readonly, nonatomic) unsigned int basePlaces;
@property (readonly, nonatomic) char baseUseMinusSign;
@property (readonly, nonatomic) char supportsNumericProperties;
@property (readonly, nonatomic) char isDecimal;
@property (readonly, nonatomic) char isCurrency;
@property (readonly, nonatomic) char isPercentage;
@property (readonly, nonatomic) char isScientific;
@property (readonly, nonatomic) char isFraction;
@property (readonly, nonatomic) char isBase;
@property (readonly, nonatomic) long long numberOfDecimalPlaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char isCustom;
@property (readonly, copy, nonatomic) NSUUID *customFormatListKey;
@property (readonly, nonatomic) unsigned int formatType;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)numberFormatWithFormatType:(unsigned int)a0 decimalPlaces:(unsigned int)a1 showThousandsSeparator:(char)a2;
+ (id)defaultDecimalNumberFormat;
+ (id)numberFormatWithTSKFormat:(id)a0 prefixString:(id)a1 suffixString:(id)a2;
+ (char)supportsFormatType:(unsigned int)a0;
+ (id)customFormatForKey:(id)a0 documentRoot:(id)a1 fromPasteboardCustomFormatList:(id)a2;
+ (unsigned int)TSUFormatTypeFromLabelFormatType:(int)a0;
+ (id)automaticDecimalPlaces;
+ (id)defaultCurrencyCode;
+ (id)defaultDecimalNumberFormatWithPrefixString:(id)a0 suffixString:(id)a1;
+ (id)defaultNumberFormatWithFormatType:(unsigned int)a0 locale:(id)a1;
+ (int)labelFormatTypeFromTSUFormatType:(unsigned int)a0;
+ (char)supportsNumericPropertiesForFormatType:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)valueType;
- (char)isDate;
- (id)customFormatKey;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)dataFormatterForDocumentRoot:(id)a0 pasteboardCustomFormatList:(id)a1;
- (char)isCompatibleWithDataFormatter:(id)a0;
- (id)convertToPersistableStyleObject;
- (unsigned int)decimalPlacesForNumberFormatter;
- (unsigned char)negativeStyleForNumberFormatter;
- (id)chartFormattedInspectorStringForValue:(id)a0 locale:(id)a1;
- (id)chartFormattedStringForValue:(id)a0 locale:(id)a1;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)a0;
- (id)customFormat;
- (id)initWithNullableTSKFormat:(id)a0 prefixString:(id)a1 suffixString:(id)a2;
- (id)initWithTSKFormat:(id)a0 prefixString:(id)a1 suffixString:(id)a2;
- (char)isDuration;
- (id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
- (id)p_formatTypeDescription;
- (id)p_formattedBodyStringForDouble:(double)a0 locale:(id)a1;
- (char)supportsAutoMinMax;
- (id)upgradedNumberFormatFromPreUFFOrUnity1_0;

@end
