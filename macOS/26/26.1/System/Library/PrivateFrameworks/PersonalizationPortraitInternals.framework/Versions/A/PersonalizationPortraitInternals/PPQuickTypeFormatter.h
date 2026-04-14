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

+ (id)formatterWithQuery:(id)a0;
+ (id)new;

- (id)makeDateComponentFormatter;
- (id)streetLabel;
- (id)makeLongEventFormatter;
- (id)attributionPattern;
- (id)etaLabel;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)formattedLengthInMeters:(double)a0;
- (id)makeChineseBirthdayFormatter;
- (id)makeShortEventFormatter;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)makeLengthFormatter;
- (id)distanceLabel;
- (id)makeBirthdayFormatter;
- (id)timeLeftLabel;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)inviteLinkLabel;
- (id)makeMeasurementUnscaledFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)makeMeasurementWholeFormatter;
- (void).cxx_destruct;
- (id)formattedStringForLabel:(id)a0;
- (id)makeMeasurementDecimalFormatter;
- (id)formattedBirthday:(id)a0;
- (id)formattedPostalAddress:(id)a0;
- (id)formattedStringsForLabels:(id)a0;
- (id)formattedEventTime:(id)a0;
- (id)destinationLabel;
- (id)init;
- (id)formattedTimeInterval:(double)a0;

@end
