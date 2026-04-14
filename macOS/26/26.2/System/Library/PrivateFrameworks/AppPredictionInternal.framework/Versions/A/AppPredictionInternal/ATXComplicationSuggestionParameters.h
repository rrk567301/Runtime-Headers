@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)fallbackSetForLandscape;
- (id)appsToPriorsMapping;
- (id)inlineComplicationsToPriorsMapping;
- (id)modularComplicationsToPriorsMapping;
- (void).cxx_destruct;
- (BOOL)alwaysUseFallbackSets;
- (id)fallbackSetsForSet3;
- (id)fallbackSetsForSet1;
- (BOOL)showPreviewsInPosterGallery;
- (id)init;
- (id)fallbackSetsForSet2;

@end
