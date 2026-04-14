@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {
    GEOSearchCategory *_category;
}

- (void).cxx_destruct;
- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)initWithCategory:(id)a0;
- (id)init;
- (BOOL)applyToAutocompleteParameters:(id)a0 error:(id *)a1;

@end
