@class GEOMIFAutocompleteEntryClient, GEOPDMIFAutocompleteEntry, GEOMIFAutocompleteEntryServer;

@interface GEOMIFAutocompleteEntry : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) GEOMIFAutocompleteEntryClient *clientEntry;
@property (readonly, nonatomic) GEOMIFAutocompleteEntryServer *serverEntry;
@property (nonatomic) double rankedScore;
@property (retain, nonatomic) GEOPDMIFAutocompleteEntry *pdAutocompleteEntry;

- (id)description;
- (void).cxx_destruct;
- (id)initWithClientAutocompleteEntryType:(id)a0;
- (id)initWithServerAutocompleteEntryType:(id)a0;

@end
