@interface ABAddressBookSaveOptionsSanitizer : NSObject

+ (id)log;
+ (BOOL)clientHasEntitlement:(id)a0;
+ (id)saveOptionsBySanitizingClientRequestedSaveOptions:(id)a0;
+ (id)saveOptionsBySanitizingIgnoresGuardianRestrictionsInOptions:(id)a0;
+ (BOOL)isClientAllowedToBypassRestrictions;

@end
