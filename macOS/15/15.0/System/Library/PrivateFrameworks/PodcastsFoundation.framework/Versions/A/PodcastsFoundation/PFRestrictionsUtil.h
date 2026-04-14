@interface PFRestrictionsUtil : NSObject {
    BOOL _isListening;
}

+ (BOOL)isExplicitContentAllowed;
+ (void)reloadSettings;
+ (BOOL)_fetchIsExplicitContentAllowed;

@end
