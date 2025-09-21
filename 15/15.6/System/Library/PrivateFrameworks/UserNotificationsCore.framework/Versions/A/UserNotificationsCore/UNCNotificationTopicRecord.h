@class NSString;

@interface UNCNotificationTopicRecord : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *sortIdentifier;
@property (nonatomic) char supportsAlerts;
@property (nonatomic) char supportsBadges;
@property (nonatomic) char supportsSounds;
@property (nonatomic) char supportsLockScreen;
@property (nonatomic) char supportsNotificationCenter;
@property (nonatomic) char supportsCarPlay;
@property (nonatomic) char supportsSpoken;
@property (nonatomic) char supportsCriticalAlerts;
@property (nonatomic) char supportsTimeSensitive;
@property (nonatomic) char enablesAlerts;
@property (nonatomic) char enablesBadges;
@property (nonatomic) char enablesSounds;
@property (nonatomic) char enablesLockScreen;
@property (nonatomic) char enablesNotificationCenter;
@property (nonatomic) char enablesCarPlay;
@property (nonatomic) char enablesSpoken;
@property (nonatomic) char enablesCriticalAlerts;
@property (nonatomic) char enablesTimeSensitive;
@property (nonatomic) char modalAlertStyle;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
