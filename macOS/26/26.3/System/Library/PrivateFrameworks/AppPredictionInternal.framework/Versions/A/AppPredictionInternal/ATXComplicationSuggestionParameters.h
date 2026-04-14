@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)inlineComplicationsToPriorsMapping;
- (id)fallbackSetsForSet3;
- (BOOL)showPreviewsInPosterGallery;
- (id)fallbackSetsForSet2;
- (id)fallbackSetsForSet1;
- (id)init;
- (id)fallbackSetForLandscape;
- (void).cxx_destruct;
- (BOOL)alwaysUseFallbackSets;
- (id)modularComplicationsToPriorsMapping;
- (id)appsToPriorsMapping;

@end
