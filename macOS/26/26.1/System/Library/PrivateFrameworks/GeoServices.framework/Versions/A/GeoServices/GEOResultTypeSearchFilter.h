@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) unsigned long long types;

- (BOOL)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)_legacy_applyToSearchParameters:(id)a0 error:(id *)a1;
- (BOOL)_modern_applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)initWithResultTypes:(unsigned long long)a0;

@end
