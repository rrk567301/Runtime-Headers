@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (nonatomic) BOOL showContactPhotos;
@property (readonly) long long sortOrder;
@property (readonly, copy) NSString *countryCode;

+ (id)sharedDefaults;
+ (void)flushSharedInstance;

- (long long)newContactDisplayNameOrder;
- (id)init;
- (id)changeNotificationName;

@end
