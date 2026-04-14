@interface IMService : NSObject

+ (id)notificationCenter;
+ (id)allServices;
+ (id)serviceWithName:(id)a0;
+ (unsigned long long)statusForABPerson:(id)a0;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)allServicesNonBlocking;
+ (id)canonicalFormOfID:(id)a0 withIDSensitivity:(int)a1;
+ (BOOL)isEmailAddress:(id)a0 inDomains:(id)a1;
+ (unsigned long long)myStatus;
+ (id)myIdleTime;
+ (void)forgetStatusImageAppearance;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (unsigned long long)statusForIMPerson:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)localizedShortName;
- (id)localizedName;
- (BOOL)isEnabled;
- (unsigned long long)status;
- (void)login;
- (id)infoForScreenName:(id)a0;
- (id)peopleWithScreenName:(id)a0;
- (BOOL)initialSyncPerformed;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)myScreenNames;
- (void)logout;
- (id)screenNamesForPerson:(id)a0;
- (id)infoForPerson:(id)a0;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;

@end
