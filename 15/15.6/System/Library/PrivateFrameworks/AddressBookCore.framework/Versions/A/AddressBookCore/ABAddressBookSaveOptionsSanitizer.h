@interface ABAddressBookSaveOptionsSanitizer : NSObject

+ (id)log;
+ (char)clientHasEntitlement:(id)a0;
+ (char)isClientAllowedToBypassRestrictions;
+ (id)saveOptionsBySanitizingClientRequestedSaveOptions:(id)a0;
+ (id)saveOptionsBySanitizingIgnoresGuardianRestrictionsInOptions:(id)a0;

@end
