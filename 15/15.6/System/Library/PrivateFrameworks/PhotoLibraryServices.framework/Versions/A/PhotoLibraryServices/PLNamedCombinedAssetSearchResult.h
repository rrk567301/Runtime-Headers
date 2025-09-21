@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult

@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)matchRanges;
- (unsigned long long)matchCount;
- (id)contentStrings;
- (char)hasSpecialName;
- (id)initWithName:(id)a0 assetSearchResults:(id)a1 canOverlap:(char)a2;

@end
