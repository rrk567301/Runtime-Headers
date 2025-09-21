@class NSString, NSDictionary;

@interface ATXRegexFilter : NSObject {
    NSString *_assetName;
    NSDictionary *_combinedFilters;
    NSDictionary *_bundleIdsFilters;
    NSDictionary *_attributesFilters;
}

+ (id)_compilePatterns:(id)a0 assetName:(id)a1 ruleName:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_checkString:(id)a0 againstRegexesArray:(id)a1;
- (BOOL)_checkString:(id)a0 againstRegexesArrayDictionary:(id)a1;
- (id)_initWithAssetName:(id)a0 asset:(id)a1;
- (id)initWithAssetName:(id)a0;
- (BOOL)shouldFilterOutAction:(id)a0;
- (BOOL)shouldFilterOutBundleId:(id)a0 andAttribute:(id)a1;
- (BOOL)shouldFilterOutOnlyBasedOnAttribute:(id)a0;
- (BOOL)shouldFilterOutOnlyBasedOnBundleId:(id)a0;

@end
