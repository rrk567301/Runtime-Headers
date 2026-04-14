@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)assetDescription;
- (id)accessibilityDescription;
- (id)timeZone;
- (id)title;
- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)keywordTitles;

@end
