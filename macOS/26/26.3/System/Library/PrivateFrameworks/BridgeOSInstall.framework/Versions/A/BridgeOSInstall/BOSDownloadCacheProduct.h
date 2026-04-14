@class NSURL, NSArray;

@interface BOSDownloadCacheProduct : PKProduct

@property (retain) NSURL *productURL;
@property (retain) NSArray *packageReferences;

- (id)productType;
- (id)initWithURL:(id)a0;
- (id)URL;
- (void).cxx_destruct;
- (id)allPackageReferences;
- (id)_packageReferencesForDownloadCacheProductURL:(id)a0;

@end
