@class PLSearchSuggestion;

@interface PSILocationSuggestionPair : NSObject

@property (readonly, nonatomic) PLSearchSuggestion *suggestion;
@property (readonly, nonatomic) PLSearchSuggestion *otherSuggestion;
@property (readonly, nonatomic) unsigned long long score;

+ (id)searchSuggestionWithNextTokenPairingForPrimarySuggestion:(id)a0 nextTokenSuggestion:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)containsSuggestion:(id)a0;
- (id)initWithSuggestion:(id)a0 otherSuggestion:(id)a1 score:(unsigned long long)a2;
- (id)pairedSuggestions;
- (id)searchSuggestionWithNextTokenPairing;

@end
