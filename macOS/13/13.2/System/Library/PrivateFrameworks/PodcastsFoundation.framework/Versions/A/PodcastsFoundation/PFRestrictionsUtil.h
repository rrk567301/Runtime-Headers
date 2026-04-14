@interface PFRestrictionsUtil : NSObject

+ (BOOL)isExplicitContentAllowed;
+ (void)reloadSettings;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (BOOL)isRestrictedByAdministrator;
+ (BOOL)mustResolveInScreenTimePreferences;
+ (void)setAllowExplicitContent;
+ (BOOL)_fetchIsExplicitContentAllowed;

@end
