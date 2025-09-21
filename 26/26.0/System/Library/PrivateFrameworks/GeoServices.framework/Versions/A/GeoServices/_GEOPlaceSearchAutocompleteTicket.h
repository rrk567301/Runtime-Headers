@class NSString, GEOAutocompleteSessionData, GEOMapServiceTraits, GEOMIFAutocompleteRequest;

@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCompletionTicket> {
    GEOAutocompleteSessionData *_sessionData;
    GEOMIFAutocompleteRequest *_autocompleteRankerRequest;
}

@property (readonly, nonatomic, getter=_searchQuery) NSString *searchQuery;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (void).cxx_destruct;
- (id)autocompleteRequest;
- (void)applyToSuggestionEntry:(id)a0 withAutocompleteSearchResultIdentifier:(id)a1;
- (void)applyToSuggestionList:(id)a0;
- (BOOL)autocompleteTopSectionIsQuerySuggestions;
- (id)clientRankingModel;
- (BOOL)enableStructuredRAPAffordance;
- (id)geoMapItemIdentifierForSpotlight;
- (BOOL)hasShouldDisplayNoResults;
- (BOOL)hasShouldEnableGrayscaleHighlighting;
- (long long)highlightType;
- (id)initWithRequest:(id)a0 traits:(id)a1 searchQuery:(id)a2 sessionData:(id)a3;
- (BOOL)matchesFragment:(id)a0;
- (id)placeSummaryLayoutMetadata;
- (double)retainSearchTime;
- (BOOL)shouldDisplayNoResults;
- (BOOL)shouldEnableGrayscaleHighlighting;
- (BOOL)shouldUseDistanceFeatureServerResults;
- (BOOL)showAutocompleteClientSource;
- (id)sortPriorityMapping;
- (void)submitWithAutoCompletionHandler:(id /* block */)a0 auditToken:(id)a1 networkActivity:(id /* block */)a2;
- (void)submitWithAutoCompletionHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;

@end
