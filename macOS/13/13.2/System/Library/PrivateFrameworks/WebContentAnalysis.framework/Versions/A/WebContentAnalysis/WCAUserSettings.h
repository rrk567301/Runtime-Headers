@class NSString, NSDictionary;

@interface WCAUserSettings : NSObject {
    NSDictionary *_userSettings;
}

@property (copy) NSString *userName;

- (void)dealloc;
- (id)initWithUserName:(id)a0;
- (int)websiteRestrictionType;
- (id)contentFilterOverriddenSites;
- (id)whiteListAllowedSites;
- (BOOL)overridesAllowed;
- (id)_userSettingsForUser:(id)a0;

@end
