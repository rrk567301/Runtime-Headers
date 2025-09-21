@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) char shortNameFormatEnabled;
@property (nonatomic) char shortNameFormatPrefersNicknames;
@property (readonly) long long sortOrder;
@property (readonly, copy) NSString *countryCode;

+ (id)sharedDefaults;
+ (void)flushSharedInstance;

- (id)init;
- (id)changeNotificationName;
- (long long)newContactDisplayNameOrder;

@end
