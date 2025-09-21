@interface WBSFeatureAvailability : NSObject

@property (class, readonly, nonatomic) char isInternalInstall;
@property (class, readonly, nonatomic) char hasInternalContent;
@property (class, readonly, nonatomic) char shouldShowInternalUI;
@property (class, readonly, nonatomic) char isShowURLsInURLAutocompleteDebugChannelEnabled;
@property (class, readonly, nonatomic) char isCustomizationSyncEnabled;
@property (class, readonly, nonatomic) char isPerSiteSettingSyncEnabled;
@property (class, readonly, nonatomic) char isStartPageSettingSyncEnabled;
@property (class, readonly, nonatomic) char isSafariProfilesEnabled;
@property (class, readonly, nonatomic) char isLockedPrivateBrowsingEnabled;
@property (class, readonly, nonatomic) char isOngoingCredentialSharingEnabled;
@property (class, readonly, nonatomic) char isAirDropPasswordsEnabled;
@property (class, readonly, nonatomic) char isStreamlinedCompletionListEnabled;
@property (class, readonly, nonatomic) char isLabelPreviousSearchesInCompletionListEnabled;
@property (class, readonly, nonatomic) char defaultSearchEngineMatchesExperiment;
@property (class, readonly, nonatomic) char isNewTabAndWindowSyncingEnabled;
@property (class, readonly, nonatomic) char isWhatsNewInSafariEnabled;
@property (class, readonly, nonatomic) char isPasswordsAppInstalled;
@property (class, nonatomic, getter=isAutomaticStrongPasswordsEnabled) char automaticStrongPasswordsEnabled;
@property (class, nonatomic) char isAutomaticPasskeyUpgradesEnabled;
@property (class, readonly, nonatomic) char isSignInWithAppleInPasswordManagerEnabled;
@property (class, readonly, nonatomic) char isSignInWithAppleCredentialSharingEnabled;
@property (class, readonly, nonatomic) char isBrowsingAssistantEnabled;
@property (class, readonly, nonatomic) char isOnDeviceSummarizationEnabled;
@property (class, readonly, nonatomic) char is2024CloudTabsEnabled;
@property (class, readonly, nonatomic) char is2024FavoritesEnabled;
@property (class, readonly, nonatomic) char is2024PrivacyReportEnabled;
@property (class, readonly, nonatomic) char is2024ReadingListEnabled;
@property (class, readonly, nonatomic) char is2024SuggestionsEnabled;
@property (class, readonly, nonatomic) char is2024StartPageSectionTitleEnabled;
@property (class, readonly, nonatomic) char isWebKitTextExtractionEnabled;
@property (class, readonly, nonatomic) char isAppleAccountBrandingEnabled;
@property (class, readonly, nonatomic) char isScribbleEnabled;
@property (class, readonly, nonatomic) char scribbleRequiresVisualSimilarity;
@property (class, readonly, nonatomic) char isPostFixSuggestionsEnabled;
@property (class, nonatomic) char isPasswordsAppFuzzySearchEnabled;
@property (class, readonly, nonatomic) char isCredentialExchangeEnabled;

+ (char)_computeIsWhatsNewInSafariEnabled;
+ (char)_is2024StartPageDisabledOverride;
+ (char)_isPasswordSharingAvailable;
+ (char)_shouldShowChineseFeatures;
+ (char)_shouldShowRussianFeatures;
+ (char)isSearchProviderEnabled:(unsigned long long)a0;
+ (char)supportsURLCredentialStorageAccessControlGroups;
+ (void)toggleShowURLsInURLAutocompleteDebugChannel;
+ (char)wantsAggressiveKeychainCredentialCaching;

@end
