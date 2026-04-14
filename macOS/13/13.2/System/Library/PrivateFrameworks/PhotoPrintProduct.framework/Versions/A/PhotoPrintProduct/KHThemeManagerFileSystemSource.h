@interface KHThemeManagerFileSystemSource : KHThemeManagerSource {
    unsigned long long _sourceType;
}

- (unsigned long long)sourceType;
- (id)initWithThemeSourceURL:(id)a0 manager:(id)a1;
- (id)initWithPreviewSourceURL:(id)a0 manager:(id)a1;
- (id)fetchThemeProvidersForProductCodes:(id)a0;
- (id)localThemeProviders;
- (id)remoteThemeProviders;
- (id)allThemeProviders;
- (id)_themeProvidersMatchingProductCodes:(id)a0 error:(id *)a1;
- (BOOL)sourceIsAvailable;
- (id)prepareThemesForProvider:(id)a0 parentProgress:(id)a1 completionHandler:(id /* block */)a2;
- (id)prepareThemePreviewsForProvider:(id)a0 parentProgress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sourceIsLocal;
- (id)URLForTheme:(id)a0;
- (id)URLForThemePreview:(id)a0;
- (BOOL)isThemeLocal:(id)a0;
- (BOOL)isThemePreviewLocal:(id)a0;
- (BOOL)isThemeValid:(id)a0;
- (BOOL)isThemePreviewValid:(id)a0;
- (id)productCodesForThemeProvider:(id)a0;
- (id)categoriesForThemeProvider:(id)a0;

@end
