@class ATXEngagementRecordManager, NSString;

@interface ATXSpotlightFeedbackManager : NSObject {
    ATXEngagementRecordManager *_engagementRecordManager;
    NSString *_clientModelId;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)combineReasons:(unsigned long long)a0;
- (void)_toggleSiriSearchSettingsOffForAppSuggestion:(id)a0;
- (void)addHiddenActionExecutableIdentifier:(id)a0;
- (void)addHiddenAppSuggestionBundleIdentifier:(id)a0;
- (void)addHiddenAutoShortcutIdentifier:(id)a0;
- (void)addHiddenContextIdentifier:(id)a0;
- (char)autoShortcutHasBeenHiddenForIdentifier:(id)a0;
- (void)clearHiddenSuggestions;
- (char)contextHasBeenHiddenForContextIdentifier:(id)a0;
- (char)contextHasBeenHiddenForSuggestion:(id)a0;
- (char)hasBeenHiddenEntityWithIdentifier:(id)a0;
- (char)hasBeenHiddenSuggestion:(id)a0;
- (id)initWithEngagementRecordManager:(id)a0;

@end
