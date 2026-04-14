@class NSString, NSDictionary;

@interface WCAUserSettings : NSObject {
    NSDictionary *_userSettings;
}

@property (copy) NSString *userName;

- (void)dealloc;
- (id)initWithUserName:(id)a0;
- (int)websiteRestrictionType;
- (BOOL)overridesAllowed;
- (id)whiteListAllowedSites;
- (id)_userSettingsForUser:(id)a0;
- (id)contentFilterOverriddenSites;

@end
