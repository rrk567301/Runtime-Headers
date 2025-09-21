@class _PASLock;

@interface ATXSpotlightZKWTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(int)a0;
- (void)updateFactors;
- (id)codepathIDs;
- (char)nsuaSuggestions;
- (long long)alternateRecentsRanking;
- (id)codePathForAlternateRecentsControl;
- (id)codePathForAlternateRecentsTreatment;
- (id)codePathIdForSuggestionsMaxCount;
- (char)matchesAlternateRecentsControlCodePath;
- (char)matchesAlternateRecentsTreatmentCodePath;
- (char)matchesSuggestionsMaxCount;
- (char)showNSUASuggestionsAsAppLaunches;
- (long long)suggestionsMaxCount;

@end
