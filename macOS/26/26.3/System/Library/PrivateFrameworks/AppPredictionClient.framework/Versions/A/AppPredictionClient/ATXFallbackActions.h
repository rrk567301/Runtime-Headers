@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)fallbackActionsBundle;
+ (id)stringForFallbackActionType:(unsigned long long)a0;
+ (id)dateWithoutMinutesAndSeconds:(id)a0;
+ (unsigned long long)fallbackActionTypeForString:(id)a0;

- (id)initWithClientModelSpec:(id)a0;
- (id)init;
- (id)sendAMessage;
- (id)viewPhotos;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)createAnEventForCurrentDate:(id)a0;
- (void).cxx_destruct;
- (id)searchSafari;
- (id)startATimer;
- (id)localizedStringForKey:(id)a0;
- (id)suggestionsForAllFallbackActions;
- (id)proactiveSuggestionForAction:(id)a0;

@end
