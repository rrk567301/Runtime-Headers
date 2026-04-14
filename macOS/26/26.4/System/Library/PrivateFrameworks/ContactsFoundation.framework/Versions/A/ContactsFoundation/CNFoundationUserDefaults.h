@class NSDictionary, NSString, CNUserDefaults;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>

@property (retain) CNUserDefaults *userDefaults;
@property BOOL showContactPhotos;
@property BOOL preferNickname;
@property unsigned long long nameOrder;
@property unsigned long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) NSDictionary *filteredAccountsAndContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registeredDefaults;
+ (id)sharedDefaults;
+ (unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)a0;
+ (id)makeRegisteredDefaults;
+ (BOOL)shouldRedactLoggingDescription;

- (unsigned long long)sortOrder;
- (void).cxx_destruct;
- (id)countryCode;
- (id)init;
- (unsigned long long)newContactNameOrder;

@end
