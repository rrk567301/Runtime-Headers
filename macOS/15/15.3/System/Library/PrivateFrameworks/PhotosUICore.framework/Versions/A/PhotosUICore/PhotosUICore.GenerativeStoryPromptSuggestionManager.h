@interface PhotosUICore.GenerativeStoryPromptSuggestionManager : _TtCs12_SwiftObject <PhotosIntelligence.PromptSuggestionValidationObserver> {
    void /* unknown type, empty encoding */ _currentSuggestions;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_suggestionProvider;
    void /* unknown type, empty encoding */ _currentFetchTask;
    void /* unknown type, empty encoding */ _lastFetchDate;
    void /* unknown type, empty encoding */ refetchInterval;
    void /* unknown type, empty encoding */ wantsMockSuggestions;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)suggestionsDidGetInvalidated;

@end
