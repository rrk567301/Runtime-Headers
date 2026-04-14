@class SFFlight;

@interface WBSParsecFlightFetcher : NSObject {
    SFFlight *_flight;
    unsigned long long _selectedLegIndex;
}

@property (readonly) SFFlight *flight;
@property unsigned long long selectedLegIndex;

- (void).cxx_destruct;
- (id)initWithSearchResult:(id)a0;
- (void)getFlight:(id *)a0 selectedLegIndex:(unsigned long long *)a1;
- (void)_fetchFlightsWithSearchResult:(id)a0;

@end
