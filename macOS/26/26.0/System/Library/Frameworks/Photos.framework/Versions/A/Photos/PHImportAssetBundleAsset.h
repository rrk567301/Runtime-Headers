@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)assetDescription;
- (id)timeZone;
- (id)title;
- (id)creationDate;
- (id)accessibilityDescription;
- (void).cxx_destruct;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)keywordTitles;

@end
