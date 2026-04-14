@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)alwaysUseFallbackSets;
- (BOOL)showPreviewsInPosterGallery;
- (id)fallbackSetsForSet1;
- (id)inlineComplicationsToPriorsMapping;
- (id)fallbackSetsForSet2;
- (id)modularComplicationsToPriorsMapping;
- (void).cxx_destruct;
- (id)appsToPriorsMapping;
- (id)fallbackSetForLandscape;
- (id)init;
- (id)fallbackSetsForSet3;

@end
