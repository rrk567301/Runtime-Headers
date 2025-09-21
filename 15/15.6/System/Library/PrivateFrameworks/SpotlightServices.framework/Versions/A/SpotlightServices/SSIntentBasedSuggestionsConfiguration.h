@interface SSIntentBasedSuggestionsConfiguration : NSObject

@property (nonatomic) char showWebAsTypedSuggestion;
@property (nonatomic) int localSuggestionQuota;
@property (nonatomic) int serverSuggestionQuota;

@end
