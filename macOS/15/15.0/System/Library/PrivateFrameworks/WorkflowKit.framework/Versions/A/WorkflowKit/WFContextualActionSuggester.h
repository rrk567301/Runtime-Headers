@class NSUUID, CAXSuggestionProvider;

@interface WFContextualActionSuggester : NSObject

@property (readonly, nonatomic) NSUUID *lastSuggestionSessionUUID;
@property (readonly, nonatomic) CAXSuggestionProvider *provider;

- (id)init;
- (void).cxx_destruct;
- (void)reportEvent:(unsigned long long)a0 inContext:(id)a1 involvingActions:(id)a2;
- (id)initialSuggestionsForContextIfApplicable:(id)a0 numSuggestions:(unsigned long long)a1;
- (BOOL)shouldShowInitialSuggestionsForContext:(id)a0;
- (id)suggestActionsForContext:(id)a0 numSuggestions:(unsigned long long)a1;

@end
