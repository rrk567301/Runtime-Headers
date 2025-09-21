@class NSString, NSDateFormatter;

@interface WBSOfflineSearchSuggestionsModelUpdateManager : NSObject {
    char _googleWasADefaultSearchProvider;
    char _googleIsADefaultSearchProvider;
    char _offlineSuggestionsRemotelyDisabled;
    NSDateFormatter *_dateFormatter;
    NSString *_lastUsedLocaleIdentifier;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_localeChanged:(id)a0;
- (void)_checkForModelUpdates;
- (void)_clearModels;
- (void)_disconnectFromSearchHelper;
- (void)_doUpdates;
- (void)_recordUpdateResultWithError:(id)a0;
- (void)_searchEngineChangedToOrFromGoogle:(id)a0;
- (id)_searchHelperProxy;
- (char)_shouldCheckForModelUpdates;
- (void)_suppressSearchSuggestionsSettingDidChange:(id)a0;
- (double)_timeIntervalSinceLastUpdate;
- (void)_updateDefaultSearchEnginePreferencesState;
- (void)checkForModelUpdatesOrRemoteDisablementIfNeeded;

@end
