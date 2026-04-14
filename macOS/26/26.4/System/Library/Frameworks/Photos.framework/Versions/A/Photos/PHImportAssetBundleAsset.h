@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)creationDate;
- (id)title;
- (id)timeZone;
- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)assetDescription;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)keywordTitles;

@end
