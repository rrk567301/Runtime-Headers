@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)title;
- (id)assetDescription;
- (id)creationDate;
- (id)accessibilityDescription;
- (void).cxx_destruct;
- (id)timeZone;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)keywordTitles;

@end
