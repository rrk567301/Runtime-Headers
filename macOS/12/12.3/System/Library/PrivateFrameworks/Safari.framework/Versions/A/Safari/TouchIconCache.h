@interface TouchIconCache : WBSTouchIconCache

@property (class, readonly, nonatomic) TouchIconCache *sharedCache;

+ (void)deleteDeprecatedCacheDirectory;
+ (id)_imageDirectoryURL;
+ (id)_paddedUncoloredFavoritesGlyph;
+ (id)_deprecatedImageDirectoryURL;
+ (id)_monogramConfiguration;
+ (id)_generateDefaultFavoritesIcon;

- (id)initWithImageDirectoryURL:(id)a0;
- (id)_didGenerateResponse:(id)a0 forRequest:(id)a1;
- (id)_operationWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didLoadTouchIcon:(id)a0 withCacheSettingsEntry:(id)a1;
- (long long)_transparencyAnalysisResultForImage:(id)a0;

@end
