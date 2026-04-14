@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {
    GEOSearchCategory *_category;
}

- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0;

@end
