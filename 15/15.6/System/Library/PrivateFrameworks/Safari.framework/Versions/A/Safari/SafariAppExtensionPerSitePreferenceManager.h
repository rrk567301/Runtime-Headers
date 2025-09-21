@class NSString, NSArray;
@protocol WBSPerSitePreferenceManagerDelegate;

@interface SafariAppExtensionPerSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManager> {
    NSArray *_preferences;
}

@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDelegate> delegate;
@property (readonly, nonatomic) char shouldDeleteUnrecognizedPreference;
@property (readonly, nonatomic) char hasDynamicPreferenceValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)preferences;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (void)getDefaultPreferenceValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDomainsAllowedToRemoveForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)localizedWarningTextForPreference:(id)a0;
- (char)preferenceOnlyShowsConfiguredSites:(id)a0;
- (char)preferenceShouldBeEnabled:(id)a0 forDomain:(id)a1;
- (char)preferenceShouldBeEnabledForDefaultValue:(id)a0;
- (char)preferenceShowsTabsInPrivateBrowsing:(id)a0;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDefaultValue:(id)a0 ofPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (char)shouldUseSmallWarningIconForPreference:(id)a0;
- (id)valuesForPreference:(id)a0;
- (id)warningImageForPreference:(id)a0;
- (char)_contentURLPatternMatches:(id)a0 forDomain:(id)a1;
- (void)_extensionStateDidChange:(id)a0;
- (id)_matchPatternsForDomain:(id)a0 forPreference:(id)a1;
- (char)_shouldShowExtensionInWebsitePreferences:(id)a0;
- (id)perSitePreferenceUserInterfaceInformation:(id)a0;

@end
