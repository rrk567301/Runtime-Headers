@class NSString, FLFollowUpNotification, NSData, NSArray, NSDictionary, NSDate;

@interface FLFollowUpItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *delegateMachServiceName;
@property (retain, nonatomic) NSData *_userInfoData;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *collectionIdentifier;
@property (retain, nonatomic) FLFollowUpNotification *notification;
@property (nonatomic) char showInSettings;
@property (copy, nonatomic) NSString *targetBundleIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *informativeFooterText;
@property (copy, nonatomic) NSString *representingBundlePath;
@property (copy, nonatomic) NSString *bundleIconName;
@property unsigned long long displayStyle;
@property (copy) NSString *categoryIdentifier;
@property (copy) NSString *extensionIdentifier;
@property (copy) NSString *accountIdentifier;
@property (copy) NSString *typeIdentifier;
@property (copy) NSArray *actions;
@property (copy) NSDictionary *userInfo;
@property (copy) NSDate *expirationDate;
@property (readonly) char isExpired;
@property char shouldPersistWhenActivated;
@property char shouldPersistWhenDismissed;

+ (long long)_daysRemaining:(id)a0 ceiling:(char)a1;
+ (id)_expirationDateFormatter;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_shouldAdjustInstanceToMidnight;
- (char)isHSA2LoginItem;
- (char)_hasSafeURLs;
- (id)_informativeNotificationTextOrDate;
- (id)_midnightAdjustedDate;
- (id)_priorityFlagString;
- (id)_styleFlagsString;
- (char)displayExpirationDate;
- (id)formattedExpirationDate;
- (id)initWithoutDefaults;
- (char)isHSA2PasswordResetItem;

@end
