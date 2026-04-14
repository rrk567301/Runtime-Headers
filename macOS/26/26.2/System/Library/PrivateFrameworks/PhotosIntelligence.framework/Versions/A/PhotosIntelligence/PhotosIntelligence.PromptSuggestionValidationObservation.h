@interface PhotosIntelligence.PromptSuggestionValidationObservation : NSObject <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ observedPeopleFetchRequest;
    void /* unknown type, empty encoding */ observedAssetFetchRequest;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ suggestionsAssetPeopleUUIDMap;
    void /* unknown type, empty encoding */ suggestions;
}

- (void).cxx_destruct;
- (id)init;
- (void)photoLibraryDidChange:(id)a0;

@end
