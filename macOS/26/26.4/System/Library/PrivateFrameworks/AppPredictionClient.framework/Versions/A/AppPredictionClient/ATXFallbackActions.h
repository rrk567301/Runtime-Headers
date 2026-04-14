@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)fallbackActionsBundle;
+ (id)dateWithoutMinutesAndSeconds:(id)a0;
+ (id)stringForFallbackActionType:(unsigned long long)a0;
+ (unsigned long long)fallbackActionTypeForString:(id)a0;

- (id)suggestionsForAllFallbackActions;
- (id)initWithClientModelSpec:(id)a0;
- (void).cxx_destruct;
- (id)createAnEventForCurrentDate:(id)a0;
- (id)searchSafari;
- (id)startATimer;
- (id)init;
- (id)sendAMessage;
- (id)proactiveSuggestionForAction:(id)a0;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)localizedStringForKey:(id)a0;
- (id)viewPhotos;

@end
