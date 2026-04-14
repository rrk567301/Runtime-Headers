@interface SafariSettingsSyncEngine : WBSSafariSettingsSyncEngine

- (id)init;
- (BOOL)syncEnabled;
- (void)_didUpdateHighlightsVisibility:(id)a0;
- (id)_secureDefaults;
- (void)_backgroundImageChanged:(id)a0;
- (void)_cloudBackgroundImageDidUpdateOnServer:(id)a0;
- (void)_cloudBackgroundImageWasDeletedOnServer:(id)a0;
- (void)_cloudSettingsDidUpdateOnServer:(id)a0;
- (void)_customizationToggleWasDismissed:(id)a0;
- (void)_didUpdateBackgroundImageVisibility:(id)a0;
- (void)_didUpdateCloudTabsVisibility:(id)a0;
- (void)_didUpdateFavoritesVisibility:(id)a0;
- (void)_didUpdateFrequentlyVisitedSitesVisibility:(id)a0;
- (void)_didUpdatePrivacyReportVisibility:(id)a0;
- (void)_didUpdateReadingListVisibility:(id)a0;
- (void)_didUpdateRecentlyClosedTabsVisibility:(id)a0;
- (void)_didUpdateSiriSuggestionsVisibility:(id)a0;
- (void)_didUpdateStartPageSectionOrder:(id)a0;
- (void)_didUpdateTabGroupFavoritesVisibility:(id)a0;
- (void)_saveStartPageSectionVisibility:(id)a0 withKey:(id)a1;

@end
