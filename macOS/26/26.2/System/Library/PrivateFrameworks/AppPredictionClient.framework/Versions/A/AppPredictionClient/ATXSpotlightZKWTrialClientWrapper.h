@class _PASLock;

@interface ATXSpotlightZKWTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)initWithClientIdentifier:(int)a0;
- (void).cxx_destruct;
- (void)updateFactors;
- (id)codepathIDs;
- (BOOL)nsuaSuggestions;
- (long long)alternateRecentsRanking;
- (id)codePathForAlternateRecentsControl;
- (id)codePathForAlternateRecentsTreatment;
- (id)codePathIdForSuggestionsMaxCount;
- (BOOL)matchesAlternateRecentsControlCodePath;
- (BOOL)matchesAlternateRecentsTreatmentCodePath;
- (BOOL)matchesSuggestionsMaxCount;
- (BOOL)showNSUASuggestionsAsAppLaunches;
- (long long)suggestionsMaxCount;

@end
