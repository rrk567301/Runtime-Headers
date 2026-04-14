@class NSString, NSMeasurementFormatter, NSLengthFormatter, _PASLock, NSLocale, NSDateComponentsFormatter, PPQuickTypeQuery, NSDateFormatter, _PASCachedResult, NSCache;

@interface PPQuickTypeFormatter : NSObject {
    PPQuickTypeQuery *_query;
    NSLocale *_locale;
    NSString *_desiredLanguage;
    NSString *_fallbackLanguage;
    NSDateFormatter *_birthdayFormatter;
    NSDateFormatter *_chineseBirthdayFormatter;
    NSDateFormatter *_yearlessChineseBirthdayFormatter;
    NSDateFormatter *_shortEventFormatter;
    NSDateFormatter *_longEventFormatter;
    NSCache *_dateFormatCache;
    NSCache *_appNameCache;
    NSMeasurementFormatter *_measurementWholeFormatter;
    NSMeasurementFormatter *_measurementDecimalFormatter;
    NSMeasurementFormatter *_measurementUnscaledFormatter;
    NSLengthFormatter *_lengthFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
    _PASLock *_localizedStringsCache;
    _PASCachedResult *_cachedContactsLabeledValuesLprojs;
}

+ (id)new;
+ (id)formatterWithQuery:(id)a0;

- (id)makeLongEventFormatter;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)destinationLabel;
- (id)makeDateComponentFormatter;
- (id)formattedLengthInMeters:(double)a0;
- (id)distanceLabel;
- (id)formattedEventTime:(id)a0;
- (id)makeMeasurementWholeFormatter;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)timeLeftLabel;
- (id)makeMeasurementDecimalFormatter;
- (id)makeShortEventFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)inviteLinkLabel;
- (id)formattedStringForLabel:(id)a0;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)init;
- (id)makeLengthFormatter;
- (id)makeMeasurementUnscaledFormatter;
- (id)etaLabel;
- (id)makeBirthdayFormatter;
- (id)formattedStringsForLabels:(id)a0;
- (id)formattedTimeInterval:(double)a0;
- (id)makeChineseBirthdayFormatter;
- (id)streetLabel;
- (id)formattedBirthday:(id)a0;
- (id)formattedPostalAddress:(id)a0;
- (id)attributionPattern;
- (void).cxx_destruct;

@end
