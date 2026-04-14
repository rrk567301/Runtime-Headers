@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject {
    double _analyticsShortSessionCreateTime;
}

@property (readonly, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAutoCompleteSessionData:(id)a0;
- (id)updateWithAutoCompleteSessionData:(id)a0;

@end
