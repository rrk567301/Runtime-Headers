@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)alwaysUseFallbackSets;
- (id)fallbackSetForLandscape;
- (id)fallbackSetsForSet2;
- (BOOL)showPreviewsInPosterGallery;
- (void).cxx_destruct;
- (id)inlineComplicationsToPriorsMapping;
- (id)init;
- (id)modularComplicationsToPriorsMapping;
- (id)appsToPriorsMapping;
- (id)fallbackSetsForSet3;
- (id)fallbackSetsForSet1;

@end
