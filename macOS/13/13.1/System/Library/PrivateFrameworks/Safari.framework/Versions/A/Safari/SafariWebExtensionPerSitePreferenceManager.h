@class NSString, NSArray;
@protocol WBSPerSitePreferenceManagerDelegate;

@interface SafariWebExtensionPerSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManager> {
    NSArray *_preferences;
}

@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)preferences;
- (id)valuesForPreference:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (void)getDefaultPreferenceValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDefaultValue:(id)a0 ofPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)preferenceOnlyShowsConfiguredSites:(id)a0;
- (id)localizedWarningTextForPreference:(id)a0;
- (void)getDomainsAllowedToRemoveForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (void)_extensionStateDidChange:(id)a0;
- (void)_setValue:(id)a0 ofMatchPattern:(id)a1 forExtension:(id)a2 completionHandler:(id /* block */)a3;

@end
