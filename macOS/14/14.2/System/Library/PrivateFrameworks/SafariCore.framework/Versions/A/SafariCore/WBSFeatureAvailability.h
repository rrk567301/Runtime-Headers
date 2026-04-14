@interface WBSFeatureAvailability : NSObject

@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL shouldShowInternalUI;
@property (class, readonly, nonatomic) BOOL isShowURLsInURLAutocompleteDebugChannelEnabled;
@property (class, readonly, nonatomic) BOOL isCustomizationSyncEnabled;
@property (class, readonly, nonatomic) BOOL isPerSiteSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isStartPageSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isSafariProfilesEnabled;
@property (class, readonly, nonatomic) BOOL isEnhancedPrivateBrowsingEnabled;
@property (class, readonly, nonatomic) BOOL isLockedPrivateBrowsingEnabled;
@property (class, readonly, nonatomic) BOOL isOngoingCredentialSharingEnabled;
@property (class, readonly, nonatomic) BOOL isAirDropPasswordsEnabled;
@property (class, readonly, nonatomic) BOOL isResponsiveCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isMoreSearchProviderSuggestionsEnabled;
@property (class, readonly, nonatomic) BOOL isStreamlinedCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isReflectUserIntentInSearchEnabled;
@property (class, readonly, nonatomic) BOOL isSearchUIRefinementsEnabled;
@property (class, readonly, nonatomic) BOOL isProfileStartPageCustomizationEnabled;
@property (class, readonly, nonatomic) BOOL isDifferentPrivateBrowsingSearchEngineEnabled;
@property (class, readonly, nonatomic) BOOL isNewTabAndWindowSyncingEnabled;
@property (class, readonly, nonatomic) BOOL isWhatsNewInSafariEnabled;

+ (BOOL)_computeIsWhatsNewInSafariEnabled;
+ (BOOL)_isPasswordSharingAvailable;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;
+ (void)toggleShowURLsInURLAutocompleteDebugChannel;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;

@end
