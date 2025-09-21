@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {
    GEOSearchCategory *_category;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0;
- (char)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (char)applyToSearchParameters:(id)a0 error:(id *)a1;

@end
