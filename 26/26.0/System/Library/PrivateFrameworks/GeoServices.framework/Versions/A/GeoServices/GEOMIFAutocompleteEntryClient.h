@class GEOMIFAutocompleteBaseEntry, GEOPDMIFAutocompleteEntryClient;

@interface GEOMIFAutocompleteEntryClient : NSObject

@property (readonly, nonatomic) GEOMIFAutocompleteBaseEntry *baseEntry;
@property (readonly, nonatomic) GEOPDMIFAutocompleteEntryClient *pdClientEntry;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAutocompleteBaseEntry:(id)a0;
- (id)initWithPDClientEntry:(id)a0;

@end
