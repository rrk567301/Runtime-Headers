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

- (BOOL)displayExpirationDate;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isHSA2LoginItem;
- (void).cxx_destruct;
- (BOOL)_hasSafeURLs;
- (id)_midnightAdjustedDate;
- (id)initWithoutDefaults;
- (BOOL)_shouldAdjustInstanceToMidnight;
- (id)_styleFlagsString;
- (id)init;
- (id)_priorityFlagString;
- (id)description;
- (BOOL)isHSA2PasswordResetItem;
- (id)initWithCoder:(id)a0;
- (id)formattedExpirationDate;
- (id)_informativeNotificationTextOrDate;

@end
