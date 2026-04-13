@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult

@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)matchRanges;
- (unsigned long long)matchCount;
- (id)contentStrings;
- (id)initWithName:(id)a0 assetSearchResults:(id)a1 canOverlap:(BOOL)a2;
- (BOOL)hasSpecialName;

@end
