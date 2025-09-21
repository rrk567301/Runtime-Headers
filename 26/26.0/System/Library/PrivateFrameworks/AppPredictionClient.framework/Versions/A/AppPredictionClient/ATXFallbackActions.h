@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)stringForFallbackActionType:(unsigned long long)a0;
+ (unsigned long long)fallbackActionTypeForString:(id)a0;
+ (id)dateWithoutMinutesAndSeconds:(id)a0;
+ (id)fallbackActionsBundle;

- (id)initWithClientModelSpec:(id)a0;
- (id)sendAMessage;
- (id)init;
- (id)proactiveSuggestionForAction:(id)a0;
- (id)createAnEventForCurrentDate:(id)a0;
- (id)searchSafari;
- (id)localizedStringForKey:(id)a0;
- (id)viewPhotos;
- (id)suggestionsForAllFallbackActions;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)startATimer;
- (void).cxx_destruct;

@end
