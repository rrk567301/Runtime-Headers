@class GEOMIFAutocompleteBaseEntry, GEOPDMIFAutocompleteEntryServer, GEOPDAutocompleteEntry;

@interface GEOMIFAutocompleteEntryServer : NSObject

@property (readonly, nonatomic) GEOMIFAutocompleteBaseEntry *baseEntry;
@property (readonly, nonatomic) GEOPDAutocompleteEntry *serverAutocompleteEntry;
@property (readonly, nonatomic) GEOPDMIFAutocompleteEntryServer *pdServerEntry;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAutocompleteBaseEntry:(id)a0 serverAutocompleteEntry:(id)a1;
- (id)initWithPDServerEntry:(id)a0;

@end
