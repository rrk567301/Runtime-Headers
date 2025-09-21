@interface GEOAddressFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter>

@property (readonly, nonatomic) unsigned long long optionsToInclude;
@property (readonly, nonatomic) unsigned long long optionsToExclude;

+ (id)filterExcludingAllOptions;
+ (id)filterIncludingAllOptions;

- (char)_applyToSubTypeFilter:(id)a0 error:(id *)a1;
- (char)applyToAutocompleteParameters:(id)a0 error:(id *)a1;
- (char)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)initWithOptionsToInclude:(unsigned long long)a0 optionsToExclude:(unsigned long long)a1;

@end
