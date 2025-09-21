@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {
    GEOSearchCategory *_category;
}

- (id)init;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (id)initWithCategory:(id)a0;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
