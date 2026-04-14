@class NSURL, NSArray;

@interface BOSDownloadCacheProduct : PKProduct

@property (retain) NSURL *productURL;
@property (retain) NSArray *packageReferences;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)URL;
- (id)productType;
- (id)allPackageReferences;
- (id)_packageReferencesForDownloadCacheProductURL:(id)a0;

@end
