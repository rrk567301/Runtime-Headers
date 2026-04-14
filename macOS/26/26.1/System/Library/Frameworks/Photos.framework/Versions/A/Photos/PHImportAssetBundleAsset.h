@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)creationDate;
- (id)timeZone;
- (id)accessibilityDescription;
- (id)title;
- (void).cxx_destruct;
- (id)assetDescription;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)keywordTitles;

@end
