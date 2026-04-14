@interface TouchIconCache : WBSTouchIconCache

@property (class, readonly, nonatomic) TouchIconCache *sharedCache;

+ (id)_imageDirectoryURL;
+ (id)_monogramConfiguration;
+ (id)_paddedUncoloredFavoritesGlyph;
+ (id)_generateDefaultFavoritesIcon;
+ (void)deleteDeprecatedCacheDirectory;
+ (id)_deprecatedImageDirectoryURL;

- (id)initWithImageDirectoryURL:(id)a0;
- (id)_didGenerateResponse:(id)a0 forRequest:(id)a1;
- (id)_operationWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
