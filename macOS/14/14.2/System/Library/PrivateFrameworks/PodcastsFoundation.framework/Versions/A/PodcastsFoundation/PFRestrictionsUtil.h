@interface PFRestrictionsUtil : NSObject {
    BOOL _isListening;
}

+ (BOOL)isExplicitContentAllowed;
+ (void)reloadSettings;
+ (BOOL)_fetchIsExplicitContentAllowed;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (BOOL)isRestrictedByAdministrator;
+ (BOOL)mustResolveInScreenTimePreferences;
+ (void)setAllowExplicitContent;

@end
