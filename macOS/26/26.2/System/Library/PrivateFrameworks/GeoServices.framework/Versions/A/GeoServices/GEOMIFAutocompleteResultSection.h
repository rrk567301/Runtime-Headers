@class NSString, NSArray, GEOPDMIFAutocompleteResultSection;

@interface GEOMIFAutocompleteResultSection : NSObject {
    GEOPDMIFAutocompleteResultSection *_resultSection;
}

@property (readonly, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) NSArray *autocompleteEntries;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAutocompleteResultSection:(id)a0;

@end
