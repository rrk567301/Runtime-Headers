@class NSString, NSURL, _PASLock, NSMeasurementFormatter, NSLengthFormatter, NSLocale, NSDateComponentsFormatter, PPQuickTypeQuery, NSDateFormatter, NSCache;

@interface PPQuickTypeFormatter : NSObject {
    PPQuickTypeQuery *_query;
    NSLocale *_locale;
    NSString *_desiredLanguage;
    NSString *_fallbackLanguage;
    _PASLock *_localizedStrings;
    NSDateFormatter *_birthdayFormatter;
    NSDateFormatter *_chineseBirthdayFormatter;
    NSDateFormatter *_yearlessChineseBirthdayFormatter;
    NSDateFormatter *_shortEventFormatter;
    NSDateFormatter *_longEventFormatter;
    NSCache *_localizedLabelCache;
    NSCache *_dateFormatCache;
    NSURL *_labeledValueLocalizationURL;
    NSCache *_appNameCache;
    NSMeasurementFormatter *_measurementWholeFormatter;
    NSMeasurementFormatter *_measurementDecimalFormatter;
    NSMeasurementFormatter *_measurementUnscaledFormatter;
    NSLengthFormatter *_lengthFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
}

+ (id)new;
+ (id)formatterWithQuery:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)distanceLabel;
- (id)makeShortEventFormatter;
- (id)makeLongEventFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)makeBirthdayFormatter;
- (id)formattedBirthday:(id)a0;
- (id)formattedEventTime:(id)a0;
- (id)formattedStringForLabel:(id)a0;
- (id)formattedStringsForLabels:(id)a0;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)makeMeasurementWholeFormatter;
- (id)makeMeasurementDecimalFormatter;
- (id)makeMeasurementUnscaledFormatter;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)makeLengthFormatter;
- (id)formattedLengthInMeters:(double)a0;
- (id)formattedPostalAddress:(id)a0;
- (id)makeDateComponentFormatter;
- (id)formattedTimeInterval:(double)a0;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)attributionPattern;
- (id)etaLabel;
- (id)destinationLabel;
- (id)streetLabel;
- (id)timeLeftLabel;
- (id)inviteLinkLabel;

@end
