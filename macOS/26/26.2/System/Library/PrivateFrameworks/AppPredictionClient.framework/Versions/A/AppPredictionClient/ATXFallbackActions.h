@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)dateWithoutMinutesAndSeconds:(id)a0;
+ (id)fallbackActionsBundle;
+ (unsigned long long)fallbackActionTypeForString:(id)a0;
+ (id)stringForFallbackActionType:(unsigned long long)a0;

- (id)suggestionsForAllFallbackActions;
- (id)proactiveSuggestionForAction:(id)a0;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)sendAMessage;
- (id)localizedStringForKey:(id)a0;
- (void).cxx_destruct;
- (id)searchSafari;
- (id)initWithClientModelSpec:(id)a0;
- (id)startATimer;
- (id)init;
- (id)viewPhotos;
- (id)createAnEventForCurrentDate:(id)a0;

@end
