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
- (id)formattedEventTime:(id)a0;
- (id)formattedStringForLabel:(id)a0;
- (id)formattedPostalAddress:(id)a0;
- (id)formattedBirthday:(id)a0;
- (id)inviteLinkLabel;
- (id)makeBirthdayFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)formattedStringsForLabels:(id)a0;
- (id)makeMeasurementDecimalFormatter;
- (id)makeMeasurementWholeFormatter;
- (id)makeMeasurementUnscaledFormatter;
- (id)makeLengthFormatter;
- (id)makeDateComponentFormatter;
- (id)destinationLabel;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)attributionPattern;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)formattedLengthInMeters:(double)a0;
- (id)formattedTimeInterval:(double)a0;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)etaLabel;
- (id)streetLabel;
- (id)timeLeftLabel;

@end
