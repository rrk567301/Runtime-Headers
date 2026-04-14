@interface IMService : NSObject

+ (id)notificationCenter;
+ (id)allServices;
+ (id)serviceWithName:(id)a0;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (unsigned long long)statusForABPerson:(id)a0;
+ (BOOL)isEmailAddress:(id)a0 inDomains:(id)a1;
+ (id)canonicalFormOfID:(id)a0 withIDSensitivity:(int)a1;
+ (id)allServicesNonBlocking;
+ (unsigned long long)myStatus;
+ (id)myIdleTime;
+ (void)forgetStatusImageAppearance;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (unsigned long long)statusForIMPerson:(id)a0;

- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEnabled;
- (id)localizedName;
- (id)localizedShortName;
- (unsigned long long)status;
- (id)infoForScreenName:(id)a0;
- (id)peopleWithScreenName:(id)a0;
- (BOOL)initialSyncPerformed;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)myScreenNames;
- (void)login;
- (void)logout;
- (id)screenNamesForPerson:(id)a0;
- (id)infoForPerson:(id)a0;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;

@end
