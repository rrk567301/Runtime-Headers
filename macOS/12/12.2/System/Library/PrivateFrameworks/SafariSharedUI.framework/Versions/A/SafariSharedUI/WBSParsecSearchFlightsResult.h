@class WBSParsecFlightFetcher, SFFlight;

@interface WBSParsecSearchFlightsResult : WBSParsecLegacySearchResult <WBSParsecSearchFlightsResult> {
    WBSParsecFlightFetcher *_flightFetcher;
}

@property (readonly) SFFlight *sfFlight;
@property unsigned long long selectedLegIndex;

+ (id)_specializedSchema;

- (void).cxx_destruct;
- (void)setSfSearchResultValue:(id)a0;
- (void)getFlight:(id *)a0 selectedLegIndex:(unsigned long long *)a1;

@end
