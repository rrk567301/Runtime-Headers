@class NSURL, NSArray;

@interface BOSDownloadCacheProduct : PKProduct

@property (retain) NSURL *productURL;
@property (retain) NSArray *packageReferences;

- (id)productType;
- (id)URL;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)allPackageReferences;
- (id)_packageReferencesForDownloadCacheProductURL:(id)a0;

@end
