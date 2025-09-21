@class SFSearchResult_SpotlightExtras;

@interface SPSuggestionCardSection : SFSuggestionCardSection

@property char topHit;
@property (weak, nonatomic) SFSearchResult_SpotlightExtras *result;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
