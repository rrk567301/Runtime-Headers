@class NSArray;

@interface LUIUserPrefs : NSObject

@property (class, readonly) char fileVaultEnabled;
@property (class, readonly) char findMyMacEnabled;
@property (class, readonly) NSArray *hiddenUsersList;
@property (class, readonly) char hide500Users;
@property (class, readonly) char hideAdminUsers;
@property (class, readonly) char localUserLoginEnabled;
@property (class, readonly) unsigned long long preferredMaximumNumberOfAvatars;
@property (class, readonly) char showMobileHomeUsers;
@property (class, readonly) char showLocalUsers;
@property (class, readonly) NSArray *allowedList;
@property (class, readonly) NSArray *deniedList;
@property (class, readonly) long long maxNetworkUsers;
@property (class, readonly) char showNetworkUsers;

+ (void)synchronize;
+ (char)showOtherUser:(char *)a0;
+ (char)_boolValueForKey:(id)a0 valueExists:(char *)a1;
+ (id)_defaults;
+ (id)_fvunlockPreferences;
+ (long long)_integerValueForKey:(id)a0 valueExists:(char *)a1;
+ (id)_valueForKey:(id)a0 ofClass:(Class)a1 valueExists:(char *)a2;

@end
