@interface ATXStaticSuggestionsManager : NSObject

+ (id)executableObjectHashToPositionMappingForSuggestions:(id)a0;
+ (char)isValidPreviousPosition:(id)a0 uiLimit:(unsigned long long)a1 newSuggestionsCount:(unsigned long long)a2;
+ (id)preservePreviousAppPositionsForPreviousSuggestions:(id)a0 newSuggestions:(id)a1 uiLimit:(unsigned long long)a2;
+ (char)suggestionsAreAllAppExecutableTypeAndHaveValidHash:(id)a0;

@end
