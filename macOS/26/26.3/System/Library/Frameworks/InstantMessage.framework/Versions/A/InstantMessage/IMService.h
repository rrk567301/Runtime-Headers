@class NSDictionary;

@interface IMService : NSObject

@property (retain, nonatomic) NSDictionary *serviceProperties;

+ (id)serviceWithName:(id)a0;
+ (id)notificationCenter;
+ (id)allServices;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (unsigned long long)statusForABPerson:(id)a0;
+ (id)allServicesNonBlocking;
+ (void)forgetStatusImageAppearance;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (BOOL)isEmailAddress:(id)a0 inDomains:(id)a1;
+ (id)myIdleTime;
+ (unsigned long long)myStatus;
+ (id)canonicalFormOfID:(id)a0 withIDSensitivity:(int)a1;
+ (unsigned long long)statusForIMPerson:(id)a0;

- (BOOL)isEnabled;
- (id)localizedShortName;
- (id)localizedName;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)status;
- (id)infoForScreenName:(id)a0;
- (id)peopleWithScreenName:(id)a0;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (BOOL)initialSyncPerformed;
- (void)login;
- (id)myScreenNames;
- (void)logout;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;
- (id)infoForPerson:(id)a0;
- (id)screenNamesForPerson:(id)a0;

@end
