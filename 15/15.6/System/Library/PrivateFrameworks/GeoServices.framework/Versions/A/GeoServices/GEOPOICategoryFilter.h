@class NSArray;

@interface GEOPOICategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter>

@property (readonly, nonatomic) NSArray *categoriesToInclude;
@property (readonly, nonatomic) NSArray *categoriesToExclude;

+ (id)filterExcludingAllCategories;
+ (id)filterIncludingAllCategories;

- (void).cxx_destruct;
- (void)applyFilterToPlaceParameters:(id)a0;
- (char)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (char)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)initWithCategoriesToInclude:(id)a0 categoriesToExclude:(id)a1;
- (char)shouldDisplayPOIWithType:(int)a0;

@end
