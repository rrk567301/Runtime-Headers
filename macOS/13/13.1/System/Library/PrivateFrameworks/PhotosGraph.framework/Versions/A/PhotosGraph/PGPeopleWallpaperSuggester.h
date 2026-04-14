@class PGPeopleWallpaperSuggesterFilteringContext, PGSinglePersonWallpaperAssetSuggesterDistancingContext, NSDictionary, PGWallpaperSuggestionAssetGater, PGSinglePersonWallpaperAssetSuggesterScoringContext;

@interface PGPeopleWallpaperSuggester : PGAbstractSuggester {
    NSDictionary *_suggesterByPersonLocalIdentifier;
    PGPeopleWallpaperSuggesterFilteringContext *_filteringContext;
    PGSinglePersonWallpaperAssetSuggesterScoringContext *_scoringContext;
    PGSinglePersonWallpaperAssetSuggesterDistancingContext *_distancingContext;
    PGWallpaperSuggestionAssetGater *_assetGater;
}

+ (id)suggestionTypes;
+ (id)suggestionSubtypes;
+ (BOOL)passesFilteringWithAsset:(id)a0 curationContext:(id)a1 reason:(id *)a2;
+ (unsigned short)peopleWallpaperSuggestionSubtype;
+ (BOOL)filtersForTopPeople;

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (void)_buildSuggestersWithProgress:(id /* block */)a0;
- (id)personLocalIdentifiersByOriginalPersonLocalIdentifierWithProgress:(id /* block */)a0;

@end
