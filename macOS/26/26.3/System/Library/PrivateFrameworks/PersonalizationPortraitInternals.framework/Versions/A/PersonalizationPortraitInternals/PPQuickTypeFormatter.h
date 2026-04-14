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

- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)etaLabel;
- (id)inviteLinkLabel;
- (id)makeLengthFormatter;
- (id)timeLeftLabel;
- (id)formattedBirthday:(id)a0;
- (id)makeMeasurementDecimalFormatter;
- (id)init;
- (id)streetLabel;
- (id)formattedEventTime:(id)a0;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)makeBirthdayFormatter;
- (id)makeLongEventFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)destinationLabel;
- (void).cxx_destruct;
- (id)formattedPostalAddress:(id)a0;
- (id)formattedTimeInterval:(double)a0;
- (id)makeShortEventFormatter;
- (id)makeMeasurementUnscaledFormatter;
- (id)attributionPattern;
- (id)distanceLabel;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)makeDateComponentFormatter;
- (id)makeMeasurementWholeFormatter;
- (id)formattedLengthInMeters:(double)a0;
- (id)formattedStringForLabel:(id)a0;
- (id)formattedStringsForLabels:(id)a0;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;

@end
