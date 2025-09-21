@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter>

@property (readonly, nonatomic) unsigned long long types;

- (id)init;
- (char)_legacy_applyToSearchParameters:(id)a0 error:(id *)a1;
- (char)_modern_applyToSearchParameters:(id)a0 error:(id *)a1;
- (char)applyToSearchParameters:(id)a0 error:(id *)a1;
- (id)initWithResultTypes:(unsigned long long)a0;

@end
