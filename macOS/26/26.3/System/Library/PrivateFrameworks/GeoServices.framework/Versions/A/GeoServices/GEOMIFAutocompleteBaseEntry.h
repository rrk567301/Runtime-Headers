@class NSString, GEOClientACSuggestionEntry, GEOPDMIFAutocompleteBaseEntry;

@interface GEOMIFAutocompleteBaseEntry : NSObject

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) GEOClientACSuggestionEntry *acSuggestionsEntry;
@property (readonly, nonatomic) GEOPDMIFAutocompleteBaseEntry *pdBaseEntry;

- (id)description;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)a0 clientACSuggestionEntry:(id)a1;
- (id)initWithPDAutocompleteBaseEntry:(id)a0;

@end
