@class NSString, FLFollowUpNotification, NSData, NSArray, NSDictionary, NSDate;

@interface FLFollowUpItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *delegateMachServiceName;
@property (retain, nonatomic) NSData *_userInfoData;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *collectionIdentifier;
@property (retain, nonatomic) FLFollowUpNotification *notification;
@property (nonatomic) BOOL showInSettings;
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
@property (readonly) BOOL isExpired;
@property BOOL shouldPersistWhenActivated;
@property BOOL shouldPersistWhenDismissed;

+ (id)_expirationDateFormatter;
+ (long long)_daysRemaining:(id)a0 ceiling:(BOOL)a1;

- (id)_priorityFlagString;
- (id)formattedExpirationDate;
- (BOOL)_hasSafeURLs;
- (BOOL)isHSA2LoginItem;
- (BOOL)isHSA2PasswordResetItem;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)_shouldAdjustInstanceToMidnight;
- (id)description;
- (id)_midnightAdjustedDate;
- (id)initWithCoder:(id)a0;
- (id)_informativeNotificationTextOrDate;
- (id)initWithoutDefaults;
- (BOOL)displayExpirationDate;
- (id)_styleFlagsString;
- (void).cxx_destruct;

@end
