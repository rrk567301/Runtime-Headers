@class NSArray, ASFApplicationSupplier, CSReceiverPreferences;

@interface ASFAvailableSuggestionAppsController : NSObject {
    ASFApplicationSupplier *_applicationSupplier;
    CSReceiverPreferences *_spotlightPreferences;
    NSArray *_spotlightBundleIds;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (id)__spotlightBundleIds;
- (id)_additionalAppsSiriCanLearnFromBundleIdentifiers;
- (id)_createReceiverPreferences;
- (id)_siriSuggestionsClientBundleIdentifiers;
- (id)initWithApplicationSupplier:(id)a0;
- (id)visibleApps;

@end
