@class NSString;

@interface UNNotificationOnboardingDefaults : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ shownRecords;
    void /* unknown type, empty encoding */ needsSelectionAppliedToSettings;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

+ (void)applyToSettingsIfNecessary;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)save;
- (id)init;

@end
