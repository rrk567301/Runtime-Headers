@class SFSearchResult_SpotlightExtras;

@interface SPSuggestionCardSection : SFSuggestionCardSection

@property BOOL topHit;
@property (weak, nonatomic) SFSearchResult_SpotlightExtras *result;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
