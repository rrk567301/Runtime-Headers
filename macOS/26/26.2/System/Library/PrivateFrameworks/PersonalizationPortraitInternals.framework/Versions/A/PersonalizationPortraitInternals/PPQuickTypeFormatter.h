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

- (id)streetLabel;
- (id)inviteLinkLabel;
- (id)makeShortEventFormatter;
- (id)makeLongEventFormatter;
- (id)destinationLabel;
- (id)distanceLabel;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)formattedLengthInMeters:(double)a0;
- (id)makeBirthdayFormatter;
- (id)formattedPostalAddress:(id)a0;
- (id)timeLeftLabel;
- (id)makeChineseBirthdayFormatter;
- (void).cxx_destruct;
- (id)etaLabel;
- (id)makeMeasurementUnscaledFormatter;
- (id)formattedStringsForLabels:(id)a0;
- (id)formattedEventTime:(id)a0;
- (id)formattedTimeInterval:(double)a0;
- (id)makeDateComponentFormatter;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)formattedBirthday:(id)a0;
- (id)attributionPattern;
- (id)makeMeasurementWholeFormatter;
- (id)makeLengthFormatter;
- (id)init;
- (id)formattedStringForLabel:(id)a0;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)makeMeasurementDecimalFormatter;
- (id)makeYearlessChineseBirthdayFormatter;

@end
