@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (BOOL)showPreviewsInPosterGallery;
- (id)fallbackSetsForSet3;
- (id)fallbackSetsForSet2;
- (id)appsToPriorsMapping;
- (id)modularComplicationsToPriorsMapping;
- (id)init;
- (id)fallbackSetsForSet1;
- (id)fallbackSetForLandscape;
- (BOOL)alwaysUseFallbackSets;
- (id)inlineComplicationsToPriorsMapping;
- (void).cxx_destruct;

@end
