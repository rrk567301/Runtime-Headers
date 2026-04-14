@interface PFRestrictionsUtil : NSObject

+ (BOOL)isExplicitContentAllowed;
+ (void)reloadSettings;
+ (BOOL)_fetchIsExplicitContentAllowed;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (BOOL)isRestrictedByAdministrator;
+ (BOOL)mustResolveInScreenTimePreferences;
+ (void)setAllowExplicitContent;

@end
